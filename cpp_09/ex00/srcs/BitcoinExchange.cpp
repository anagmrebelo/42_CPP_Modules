#include "BitcoinExchange.hpp"

void	validate_date(std::string dateStr);
void	validate_value(std::string valueStr);
void	validate_value_max(std::string valueStr);
void	validate_structure(std::string line, std::string del);

// Constructors
BitcoinExchange::BitcoinExchange( void )
{
	return ;
}

BitcoinExchange::BitcoinExchange( std::string dbPath, std::string requestPath ) : _dbPath(dbPath), _requestPath(requestPath)
{
	std::fstream argFile;
	std::string line;

	argFile.open(dbPath, std::fstream::in);
	if (argFile.fail())
		throw BitcoinExchange::CannotOpenFile("db file");

	getline(argFile, line);
	while(getline( argFile, line ))
	{
		try
		{
			validate_structure(line, " | ");
			std::string dateStr = line.substr(0, line.find(","));
			validate_date(dateStr);
			std::string valueStr = line.erase(0, line.find(",") + 1);
			validate_value(valueStr);

			std::cout << _db[dateStr] << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "Couldn't insert in the db the line :  " << line << " - " << e.what() << std::endl;
		}
	}

	argFile.close();
	return ;
}

// Destructor
BitcoinExchange::~BitcoinExchange( void )
{
	return ;
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
	while(getline( argFile, line ))
	{
		try
		{
			validate_structure(line, ",");
			std::string dateStr = line.substr(0, line.find(","));
			validate_date(dateStr);
			std::string valueStr = line.erase(0, line.find(",") + 1);
			validate_value_max(valueStr);

			_db[dateStr] = stof(valueStr);
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}

	argFile.close();
	return ;
}

// Utils
void	validate_date(std::string dateStr)
{
	std::tm timeinfo = {};
	std::istringstream ss(dateStr);
	ss >> std::get_time(&timeinfo, "%Y-%m-%d");

	if (ss.fail()) {
		throw BitcoinExchange::InvalidDate();
	}

	std::time_t t = std::mktime(&timeinfo);
	if (t == -1)
		throw BitcoinExchange::InvalidDate();
}

void	validate_value(std::string valueStr)
{
	unsigned long dotCounter = 0;
	for (unsigned long i = 0; i < valueStr.length(); i++) {
		if (!isdigit(valueStr[i]) && valueStr[i] != '.') {
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

void	validate_value_max(std::string valueStr)
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

	if (delCounter != 1 )
		throw BitcoinExchange::InvalidFileStruct();
}

