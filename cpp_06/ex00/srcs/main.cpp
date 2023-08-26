/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebelo <arebelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 22:21:12 by arebelo           #+#    #+#             */
/*   Updated: 2023/08/26 17:23:03 by arebelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "header.h"

int	main(int argc, char **argv )
{
	try 
	{
		if (argc != 2)
			return (1);
		ScalarConverter::convert(static_cast<std::string>(argv[1]));
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}


		// std::string	type;
		// type = findType(str);
		// if (type == "char")
		// 	conversion = new Scalar(str[0]);	
		// else if (type == "int")
		// 	conversion = new Scalar(std::atoi(str.c_str()));
		// else if (type == "float")
		// 	conversion = new Scalar(static_cast<float>(std::atof(str.c_str())));
		// else if (type == "double")
		// 	conversion = new Scalar(std::atof(str.c_str()));
		// std::cout << *conversion << std::endl;
		// delete conversion;