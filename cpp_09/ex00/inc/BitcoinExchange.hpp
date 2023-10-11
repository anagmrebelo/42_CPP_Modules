#ifndef __BITCOINEXCHANGE_HPP__
# define __BITCOINEXCHANGE_HPP__

# include <iostream>
# include <fstream>
# include <map>
# include <string>

class BitcoinExchange
{
public:
	BitcoinExchange(std::string dbPath, std::string requestPath);
	~BitcoinExchange( void );

	//Methods
	void	printConversions();
	float	findClosestDateValue(std::string dateStr);

	//Exceptions
	class	CannotOpenFile : public std::exception
	{
	public:
		CannotOpenFile(std::string fileName){
			std::cout << fileName;
			if (fileName != "")
				std::cout << " - ";
		}
		virtual const char * what() const throw() {
			return "Error: could not open file." ;
		}
	};

	class	InvalidDate : public std::exception
	{
	public:
		virtual const char * what() const throw() {
			return "Error: invalid date." ;
		}
	};

	class	InvalidValue : public std::exception
	{
	public:
		virtual const char * what() const throw() {
			return "Error: invalid value." ;
		}
	};

	class	NegativeValue : public std::exception
	{
	public:
		virtual const char * what() const throw() {
			return "Error: not a positive number." ;
		}
	};

	class	MaxValue : public std::exception
	{
	public:
		virtual const char * what() const throw() {
			return "Error: too large a number." ;
		}
	};

	class	InvalidFileStruct : public std::exception
	{
	public:
		virtual const char * what() const throw() {
			return "Error: invalid line structure." ;
		}
	};

	class	DbError: public std::exception
	{
	public:
		virtual const char * what() const throw() {
			return "Error: Check database - it may be too recent or empty" ;
		}
	};

private:
	BitcoinExchange( void );

	std::string	_dbPath;
	std::string	_requestPath;

	std::map<std::string, float> _db;
};

# endif

