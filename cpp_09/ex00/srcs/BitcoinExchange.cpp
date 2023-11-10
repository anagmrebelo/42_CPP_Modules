#include "BitcoinExchange.hpp"

void validate_date(std::string dateStr);
void validate_value(std::string valueStr);
void validate_value_max(std::string valueStr);
void validate_structure(std::string line, std::string del);

// Constructors
BitcoinExchange::BitcoinExchange(void)
{
	return;
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &src)
{
	*this = src;
	return;
}

BitcoinExchange::BitcoinExchange(std::string dbPath, std::string requestPath) : _dbPath(dbPath), _requestPath(requestPath)
{
	std::fstream argFile;
	std::string line;

	argFile.open(dbPath, std::fstream::in);
	if (argFile.fail())
		throw BitcoinExchange::CannotOpenFile("db file");

	std::istream &header = getline(argFile, line);
	if (!header)
		throw BitcoinExchange::DbError();
	while (getline(argFile, line))
	{
		try
		{
			validate_structure(line, ",");
			std::string dateStr = line.substr(0, line.find(","));
			validate_date(dateStr);
			std::string valueStr = line.erase(0, line.find(",") + 1);
			validate_value(valueStr);

			_db[dateStr] = stof(valueStr);
		}
		catch (std::exception &e)
		{
			std::cout << "Couldn't insert in the db the line :  " << line << " - " << e.what() << std::endl;
		}
	}

	argFile.close();
	return;
}

// Destructor
BitcoinExchange::~BitcoinExchange(void)
{
	return;
}

// Assignation overload
BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange const &rhs)
{
	this->_dbPath = rhs._dbPath;
	this->_requestPath = rhs._requestPath;
	this->_db = rhs._db;
	return *this;
}

// Methods
void BitcoinExchange::printConversions()
{
	std::fstream argFile;
	std::string line;

	argFile.open(_requestPath, std::fstream::in);
	if (argFile.fail())
		throw BitcoinExchange::CannotOpenFile(_requestPath);

	getline(argFile, line);
	while (getline(argFile, line))
	{
		try
		{
			validate_structure(line, " | ");
			std::string dateStr = line.substr(0, line.find(" | "));
			validate_date(dateStr);
			std::string valueStr = line.erase(0, line.find(" | ") + 3);
			validate_value_max(valueStr);
			float valueFloat = std::stof(valueStr);

			std::map<std::string, float>::iterator db_it = _db.find(dateStr);
			float db_float;
			if (db_it == _db.end())
				db_float = findClosestDateValue(dateStr);
			else
				db_float = db_it->second;

			std::cout << dateStr << " => " << valueFloat << " = " << valueFloat * db_float << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}

	argFile.close();
	return;
}

// Utils
float BitcoinExchange::findClosestDateValue(std::string dateStr)
{
	std::map<std::string, float>::iterator prevIt = _db.begin();
	if (prevIt == _db.end())
		throw BitcoinExchange::DbError();
	for (std::map<std::string, float>::iterator it = _db.begin(); it != _db.end(); it++)
	{

		if (dateStr < it->first)
		{
			if (it == prevIt)
				throw BitcoinExchange::DbError();
			else
				return prevIt->second;
		}
		prevIt = it;
	}

	return (_db.begin()->second);
}

void validate_value(std::string valueStr)
{
	unsigned long dotCounter = 0;
	for (unsigned long i = 0; i < valueStr.length(); i++)
	{
		if (!isdigit(valueStr[i]) && valueStr[i] != '.')
		{
			if (valueStr[i] == '-' && i == 0)
				throw BitcoinExchange::NegativeValue();
			throw BitcoinExchange::InvalidValue();
		}

		if (valueStr[i] == '.')
			dotCounter++;
	}
	if (dotCounter > 1)
		throw BitcoinExchange::InvalidValue();
}

void validate_value_max(std::string valueStr)
{
	validate_value(valueStr);
	if (stof(valueStr) > 1000)
		throw BitcoinExchange::MaxValue();
}

unsigned long countOcurrences(std::string hay, std::string needle)
{
	unsigned long counter = 0;
	unsigned long pos = hay.find(needle);

	while (pos != std::string::npos)
	{
		counter++;
		pos = hay.find(needle, pos + needle.length());
	}
	return (counter);
}

void validate_structure(std::string line, std::string del)
{
	int delCounter = countOcurrences(line, del);

	if (delCounter != 1)
		throw BitcoinExchange::InvalidFileStruct();
}

bool isLeap(int year)
{
	return (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0));
}

bool isInvalidNumber(std::string str)
{
	for (unsigned long i = 0; i < str.length(); i++)
	{
		if (!isdigit(str[i]))
			return (true);
	}
	return (false);
}

void validate_date(std::string dateStr)
{
	if (dateStr.length() != 10)
		throw BitcoinExchange::InvalidDate();
	if (dateStr[4] != '-' || dateStr[7] != '-')
		throw BitcoinExchange::InvalidDate();

	std::string yStr = dateStr.substr(0, 4);
	std::string mStr = dateStr.substr(5, 2);
	std::string dStr = dateStr.substr(8, 2);

	if (isInvalidNumber(yStr) || isInvalidNumber(mStr) || isInvalidNumber(dStr))
		throw BitcoinExchange::InvalidDate();

	int y = stoi(yStr);
	int m = stoi(mStr);
	int d = stoi(dStr);

	if (m < 1 || m > 12 || d < 1 || d > 31)
		throw BitcoinExchange::InvalidDate();

	if (m == 2)
	{
		if (isLeap(y))
		{
			if (d > 29)
				throw BitcoinExchange::InvalidDate();
		}
		else if (d > 28)
			throw BitcoinExchange::InvalidDate();
	}

	if ((m == 4 || m == 6 || m == 9 || m == 11) && d > 30)
	{
		throw BitcoinExchange::InvalidDate();
	}
}
