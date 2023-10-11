/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebelo <arebelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 12:36:46 by arebelo           #+#    #+#             */
/*   Updated: 2023/10/11 13:26:09 by arebelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <iomanip>
# include "Exception.hpp"
# include "ScalarConverter.hpp"

static unsigned int	findPrintChar( std::string str );
static std::string	findType( std::string str );
static int			ft_isprint(int c);


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
	if (original > std::numeric_limits<char>::max() || original < std::numeric_limits<char>::min() || isnan(original))
		std::cout << "impossible" << std::endl;
	else if (!ft_isprint(original))
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << static_cast<char>(original) << std::endl;

	// Int
	std::cout << "int: ";
	if (original > std::numeric_limits<int>::max() || original < std::numeric_limits<int>::lowest() || isnan(original))
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(original) << std::endl;
	
	// Float
	std::cout << "float: ";
	if (!isinf(original) && (original > std::numeric_limits<float>::max() || original < std::numeric_limits<float>::lowest()))
		std::cout << "impossible" << std::endl;
	else
		std::cout << std::fixed << std::setprecision(1) << static_cast<float>(original) << "f" << std::endl;
	
	// Double
	std::cout << "double: ";
	if (!isinf(original) && (original > std::numeric_limits<double>::max() || original < std::numeric_limits<double>::lowest()))
		std::cout << "impossible" << std::endl;
	else
		std::cout << std::fixed << std::setprecision(1) << static_cast<double>(original) << std::endl;
	
	return ;
}

static int	ft_isprint(int c)
{
	if (c > 31 && c < 127)
		return (1);
	return (0);
}

static int	ft_isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	return (0);
}

static bool	minusSign( std::string str )
{
	if (str[0] && str[0] == '-')
		if (str[1] && !ft_isdigit(str[1]))
			return (1);
	return (0);
}

static unsigned int findPrintChar( std::string str )
{
	unsigned int	i;
	int	dots[2];
	
	i = UINT_MAX;
	dots[0] = 0;
	dots[1] = UINT_MAX;
	while(str[++i])
	{
		if(dots[0] > 1 || minusSign(str))
			throw INVException();	
		if (!ft_isdigit(str[i]) && str[i] != '-')
		{
			if (str[i] == '.')
			{
				dots[0]++;
				dots[1] = i;
				continue;
			}
			return (i);
		}
	}
	return (dots[1]);
}

static std::string findType( std::string str )
{
	size_t	i;

	if (str == "-inf" || str == "+inf" || str == "inf" || str == "nan" || str == "nanf")
	{
		return "special_case";
	}
	i = findPrintChar(str);
	if (i == UINT_MAX)
		return ("int");
	if (i == 0 && str.length() == 1 && ft_isprint(str[0]))
		return ("char");
	if (str[i] == 'f' && str.length() == i + 1)	
		return ("float");
	if (str[i] == '.' && str.length() > i + 1)
		return ("double");
	throw INVException();
}
