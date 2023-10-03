/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   findType.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebelo <arebelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 00:41:44 by arebelo           #+#    #+#             */
/*   Updated: 2023/10/03 16:02:43 by arebelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <limits.h>
# include <iostream>
# include "Exception.hpp"

int	ft_isprint(int c)
{
	if (c > 31 && c < 127)
		return (1);
	return (0);
}

int	ft_isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	return (0);
}

bool	minusSign( std::string str )
{
	if (str[0] && str[0] == '-')
		if (str[1] && !ft_isdigit(str[1]))
			return (1);
	return (0);
}

unsigned int findPrintChar( std::string str )
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

std::string findType( std::string str )
{
	size_t	i;

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
