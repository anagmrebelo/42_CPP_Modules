/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebelo <arebelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 12:41:01 by arebelo           #+#    #+#             */
/*   Updated: 2023/08/24 16:17:13 by arebelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include <stdio.h>
#include <stdlib.h>

int	main( void )
{
	std::cout << std::endl << "1. Intern creates a shrubbery creation form" << std::endl;
		try
		{
			Intern	Ana;
			AForm *	form;

			form = Ana.makeForm("shrubbery creation", "Pedro");
			std::cout << *form << std::endl;
		}
		catch(std::exception &e)
		{
			std::cout << "Exception caught: " << e.what() << std::endl;
		}
	std::cout << std::endl << "--------------------------------------------------------------------" << std::endl;

	std::cout << std::endl << "2. Intern creates a robotomy request" << std::endl;
		try
		{
			Intern	Ana;
			AForm *	form;

			form = Ana.makeForm("robotomy request", "Pedro");
			std::cout << *form << std::endl;
		}
		catch(std::exception &e)
		{
			std::cout << "Exception caught: " << e.what() << std::endl;
		}
	std::cout << std::endl << "--------------------------------------------------------------------" << std::endl;

	std::cout << std::endl << "3. Intern creates a presidential pardon form" << std::endl;
		try
		{
			Intern	Ana;
			AForm *	form;

			form = Ana.makeForm("presidential pardon", "Pedro");
			std::cout << *form << std::endl;
		}
		catch(std::exception &e)
		{
			std::cout << "Exception caught: " << e.what() << std::endl;
		}
	std::cout << std::endl << "--------------------------------------------------------------------" << std::endl;

	std::cout << std::endl << "4. Intern intents to create an invalid form" << std::endl;
		try
		{
			Intern	Ana;
			AForm *	form;

			form = Ana.makeForm("hgello", "Pedro");
			std::cout << "Should be NULL: " << form << std::endl;
		}
		catch(std::exception &e)
		{
			std::cout << "Exception caught: " << e.what() << std::endl;
		}
	std::cout << std::endl << "--------------------------------------------------------------------" << std::endl;
	return (0);
}

