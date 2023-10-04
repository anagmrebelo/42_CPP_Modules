/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebelo <arebelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 12:36:46 by arebelo           #+#    #+#             */
/*   Updated: 2023/10/04 12:26:40 by arebelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <iomanip>
# include <limits.h>
# include "Exception.hpp"
# include "ScalarConverter.hpp"

unsigned int	findPrintChar( std::string str );
std::string     findType( std::string str );


//Constructors
ScalarConverter::ScalarConverter( void ){
	return ;
}

ScalarConverter::ScalarConverter(ScalarConverter const & src){
	*this = src;
	return ;
}

//Destructors
ScalarConverter::~ScalarConverter( void ){
	return ;
}

//Assignation overload
ScalarConverter &	ScalarConverter::operator=( ScalarConverter const & rhs )
{
	std::cout << "Assignation not allowed for ScalarConverter's class" << std::endl;
	( void ) rhs;
	return (*this);
}

// Static functions
static int	ft_isprint(int c)
{
	if (c > 31 && c < 127)
		return (1);
	return (0);
}

void	ScalarConverter::convert(std::string str_lit)
{
	long double	original;

	findType(str_lit);

	if (str_lit.length() == 1 && !std::isdigit(str_lit[0]))
		original = static_cast<double>(str_lit[0]);
	else  {
		try
		{
			original = std::stold(str_lit);
		}
		catch (std::exception &e)
		{
			throw INVException();
		}
	}

	// Char
	std::cout << "char: ";
	if (original > CHAR_MAX || original < CHAR_MIN)
		std::cout << "impossible" << std::endl;
	else if (!ft_isprint(original))
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << static_cast<char>(original) << std::endl;

	// Int
	std::cout << "int: ";
	if (original > INT_MAX || original < INT_MIN)
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(original) << std::endl;
	
	// Float
	std::cout << "float: ";
	if (!isinf(original) && (original > LONG_MAX || original < LONG_MIN))
		std::cout << "impossible" << std::endl;
	else
		std::cout << std::fixed << std::setprecision(1) << static_cast<float>(original) << "f" << std::endl;
	
	// Double
	std::cout << "double: ";
	if (!isinf(original) && (original > LONG_MAX || original < LONG_MIN))
		std::cout << "impossible" << std::endl;
	else
		std::cout << std::fixed << std::setprecision(1) << static_cast<double>(original) << std::endl;
	return ;

	return;
}
