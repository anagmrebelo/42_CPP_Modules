#include "header.h"

void printConversion(char _char, int _int, float _float, double _double){
	// Char
	std::cout << "char: ";
	if (_int > CHAR_MAX || _int < CHAR_MIN)
		std::cout << "impossible" << std::endl;
	else if (!ft_isprint(_char))
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << _char << std::endl;

	// Int
	std::cout << "int: ";
	if (_float > INT_MAX || _float < INT_MIN)
		std::cout << "impossible" << std::endl;
	else
		std::cout << _int << std::endl;
	
	// Float
	std::cout << "float: ";
	if (_double > LONG_MAX || _double < LONG_MIN)
		std::cout << "impossible" << std::endl;
	else
	 std::cout << std::fixed << std::setprecision(1) << _float << "f" << std::endl;
	
	// Double
	std::cout << "double: " << _double << std::endl;
	return ;
}

int	ft_isprint(int c)
{
	if (c > 31 && c < 127)
		return (1);
	return (0);
}