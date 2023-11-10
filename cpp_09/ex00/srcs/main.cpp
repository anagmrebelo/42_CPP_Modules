#include <fstream>
#include <iostream>
#include "BitcoinExchange.hpp"

static void validateArgs(int argc, char **argv)
{
	std::fstream argFile;

	if (argc != 2)
		throw BitcoinExchange::CannotOpenFile("");

	argFile.open(argv[1]);
	if (argFile.fail())
		throw BitcoinExchange::CannotOpenFile(argv[1]);

	argFile.close();
}

int main(int argc, char **argv)
{
	try
	{
		validateArgs(argc, argv);
		BitcoinExchange bitcoinExchange = BitcoinExchange("./srcs/data.csv", argv[1]);
		bitcoinExchange.printConversions();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
		return (1);
	}
	return (0);
}
