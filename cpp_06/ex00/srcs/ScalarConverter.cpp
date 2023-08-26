/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebelo <arebelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 12:36:46 by arebelo           #+#    #+#             */
/*   Updated: 2023/08/26 17:49:21 by arebelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "header.h"

void	ScalarConverter::convert(std::string str_lit)
{	
	char				_char = 45;
	int					_int = 0;
	float				_float = 0;
	double				_double = 0;

	(void) str_lit;
	printConversion(_char, _int, _float, _double);
	return;
}