/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebelo <arebelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 02:55:55 by arebelo           #+#    #+#             */
/*   Updated: 2023/04/05 19:35:22 by arebelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main ( void )
{
	Harl	instance;

	std::cout << "DEBUG" << std::endl;
	instance.complain("DEBUG");
	std::cout << std::endl << "INFO" << std::endl;
	instance.complain("INFO");
	std::cout << std::endl << "WARNING" << std::endl;
	instance.complain("WARNING");
	std::cout << std::endl << "ERROR" << std::endl;
	instance.complain("ERROR");
	std::cout << std::endl << "NON-EXISTENT" << std::endl;
	instance.complain("NON-EXISTENT");
	return (0);
}
