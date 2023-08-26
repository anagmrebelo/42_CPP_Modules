/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebelo <arebelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 18:26:59 by arebelo           #+#    #+#             */
/*   Updated: 2023/08/24 16:02:09 by arebelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main( void )
{
	std::cout << std::endl << "1. Try to create a form with Grade required to sign of 0" << std::endl;
		try
		{
			Form	test = Form("Ana", 0, 20);
		}
		catch(std::exception &e)
		{
			std::cout << "Exception caught: " << e.what() << std::endl;
		}
	std::cout << std::endl << "--------------------------------------------------------------------" << std::endl;

	std::cout << std::endl << "2. Try to create a Bureaucrat a form with Grade required to sign of 151" << std::endl;
		try
		{
			Form	test = Form("Ana", 151, 20);
		}
		catch(std::exception &e)
		{
			std::cout << "Exception caught: " << e.what() << std::endl;
		}
	std::cout << std::endl << "--------------------------------------------------------------------" << std::endl;

	std::cout << std::endl << "3. Try to create a Bureaucrat a form with Grade required to execute of 0" << std::endl;
		try
		{
			Form	test = Form("Ana", 20, 0);
		}
		catch(std::exception &e)
		{
			std::cout << "Exception caught: " << e.what() << std::endl;
		}
	std::cout << std::endl << "--------------------------------------------------------------------" << std::endl;

	std::cout << std::endl << "4. Try to create a Bureaucrat a form with Grade required to execute of 151" << std::endl;
		try
		{
			Form	test = Form("Ana", 20, 151);
		}
		catch(std::exception &e)
		{
			std::cout << "Exception caught: " << e.what() << std::endl;
		}

	std::cout << std::endl << "--------------------------------------------------------------------" << std::endl;

	std::cout << std::endl << "5. Creating a copy of a Form " << std::endl;
		try
		{
			Form	test = Form("Ana", 20, 20);
			Form	test1 = Form(test);
			std::cout << "<-------------  SRC  ------------->" << std::endl;
			std::cout << test << std::endl;
			std::cout << "<------------- COPY -------------->" << std::endl;
			std::cout << test1;
		}
		catch(std::exception &e)
		{
			std::cout << "Exception caught: " << e.what() << std::endl;
		}

	std::cout << std::endl << "--------------------------------------------------------------------" << std::endl;

	std::cout << std::endl << "6. Assignation of a Form" << std::endl;
		try
		{
			Form	test = Form("Form1", 20, 20);
			Form	test1 = Form("Form2", 30, 30);
			test = test1;
			std::cout << "<------------- Form1 --------------->" << std::endl;
			std::cout << test << std::endl;
			std::cout << "<-----Form2 should be different----->" << std::endl;
			std::cout << test1;
		}
		catch(std::exception &e)
		{
			std::cout << "Exception caught: " << e.what() << std::endl;
		}

	std::cout << std::endl << "--------------------------------------------------------------------" << std::endl;

	std::cout << std::endl << "7. Sign a Form without authorization" << std::endl;
		try
		{
			Form			test = Form("Form1", 20, 20);
			Bureaucrat		ana = Bureaucrat("Ana", 35);
			std::cout << test << std::endl << std::endl << ana << std::endl << std::endl;

			ana.signForm(test);
			std::cout << test;
		}
		catch(std::exception &e)
		{
			std::cout << "Exception caught: " << e.what() << std::endl;
		}
	std::cout << std::endl << "--------------------------------------------------------------------" << std::endl;

	std::cout << std::endl << "8. Sign a Form" << std::endl;
		try
		{
			Form			test = Form("Form1", 19, 19);
			Bureaucrat		ana = Bureaucrat("Ana", 19);
				
			std::cout << test << std::endl << std::endl << ana << std::endl << std::endl;

			ana.signForm(test);
			std::cout << test;
		}
		catch(std::exception &e)
		{
			std::cout << "Exception caught: " << e.what() << std::endl;
		}
	std::cout << std::endl << "--------------------------------------------------------------------" << std::endl;

	std::cout << std::endl << "9. Try to sign a Form already signed" << std::endl;
		try
		{
			Form			test = Form("Form1", 19, 19);
			Bureaucrat		ana = Bureaucrat("Ana", 19);
				
			ana.signForm(test);
			std::cout << test << std::endl << std::endl << ana << std::endl << std::endl;
			ana.signForm(test);
			std::cout << test;
		}
		catch(std::exception &e)
		{
			std::cout << "Exception caught: " << e.what() << std::endl;
		}
	std::cout << std::endl << "--------------------------------------------------------------------" << std::endl;

	return (0);
}
