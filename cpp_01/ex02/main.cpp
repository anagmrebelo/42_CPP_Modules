/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarebelo <anarebelo@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 13:38:02 by arebelo           #+#    #+#             */
/*   Updated: 2023/04/02 22:51:53 by anarebelo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main( void )
{
	std::string	string = "HI THIS IS BRAIN";
	std::string *	stringPTR = &string;
	std::string &	stringREF = string;
	
	std::cout << "string adress in memory of the string: " << &string << std::endl;
	std::cout << "string address by using stringPTR: " << stringPTR << std::endl;
	std::cout << "string address by using stringREF: " << &stringREF << std::endl << std::endl;
	
	std::cout << "string: " << string << std::endl;
	std::cout << "string using stringPTR: " << *stringPTR << std::endl;
	std::cout << "string using stringREF: " << stringREF << std::endl;
	return (0);
}
