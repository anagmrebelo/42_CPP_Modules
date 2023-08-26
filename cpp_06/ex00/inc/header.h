/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebelo <arebelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 00:58:18 by arebelo           #+#    #+#             */
/*   Updated: 2023/08/26 17:47:08 by arebelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HEADER_H__
# define __HEADER_H__

# include <iostream>
# include <iomanip>
# include <limits.h>
# include "Exception.hpp"
# include "Scalar.hpp"
# include "ScalarConverter.hpp"

int				ft_isprint(int c);
unsigned int	findPrintChar( std::string str );
std::string     findType( std::string str );
void printConversion(char _char, int _int, float _float, double _double);

#endif
