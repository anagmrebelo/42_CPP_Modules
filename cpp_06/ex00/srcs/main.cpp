/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebelo <arebelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 22:21:12 by arebelo           #+#    #+#             */
/*   Updated: 2023/10/03 16:02:57 by arebelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
# include "ScalarConverter.hpp"

int	main(int argc, char **argv )
{
	try 
	{
		if (argc != 2)
			return (1);
		ScalarConverter::convert(argv[1]);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
