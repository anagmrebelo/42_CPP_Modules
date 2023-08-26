/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebelo <arebelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 18:26:59 by arebelo           #+#    #+#             */
/*   Updated: 2023/08/24 15:45:51 by arebelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main( void )
{
	std::cout << std::endl << "1. Try to create a Bureaucrat with grade 0" << std::endl;
		try
		{
			Bureaucrat	Teresa = Bureaucrat("Ana", 0);
		}
		catch(std::exception &e)
		{
			std::cout << "Exception caught: " << e.what() << std::endl;
		}
	std::cout << std::endl << "--------------------------------------------------------------------" << std::endl;

	std::cout << std::endl << "2. Try to create a Bureaucrat with grade -56" << std::endl;
		try
		{
			Bureaucrat	Teresa = Bureaucrat("Ana", -56);
		}
		catch(std::exception &e)
		{
			std::cout << "Exception caught: " << e.what() << std::endl;
		}
	std::cout << std::endl << "--------------------------------------------------------------------" << std::endl;

	std::cout << std::endl <<"3. Try to create a Bureaucrat with grade 160" << std::endl;
		try
			{
				Bureaucrat	Teresa = Bureaucrat("Ana", 160);
			}
			catch(std::exception &e)
			{
				std::cout << "Exception caught: " << e.what() << std::endl;
			}
	std::cout << std::endl << "--------------------------------------------------------------------" << std::endl;

	std::cout << std::endl << "4. Create a Bureaucrat Ana with grade 50 and a copy of Ana " << std::endl;
		try
		{
			Bureaucrat	Ana = Bureaucrat("Ana", 50);
			std::cout << Ana << std::endl;

			Bureaucrat	Ana1 = Bureaucrat(Ana);
			std::cout << Ana1 << std::endl;
		}
		catch(std::exception &e)
		{
			std::cout << "Exception caught: " << e.what() << std::endl;
		}
	std::cout << std::endl << "--------------------------------------------------------------------" << std::endl;

	std::cout << std::endl << "5. Create a Bureaucrat Jaime with grade 100 and then equal it to Ana " << std::endl;
		try
		{
			Bureaucrat	Ana = Bureaucrat("Ana", 50);
			Bureaucrat	Jaime = Bureaucrat("Jaime", 100);
			std::cout << "Upon creation: " << Jaime << std::endl;

			Jaime = Ana;
			std::cout << "After \"Jaime = Ana\": " << Jaime << std::endl;
		}
		catch(std::exception &e)
		{
			std::cout << "Exception caught: " << e.what() << std::endl;
		}

	std::cout << std::endl << "--------------------------------------------------------------------" << std::endl;

	std::cout << std::endl << "6. Trying to increase a bureaucrat to grade higher than 1  " << std::endl;
		try
		{
			Bureaucrat	Ana = Bureaucrat("Ana", 3);
			std::cout << "Upon creation: " << Ana << std::endl;
			Ana.increaseGrade();
			std::cout << "Increased grade: " << Ana << std::endl;
			Ana.increaseGrade();
			std::cout << "Increased grade: " << Ana << std::endl;
			Ana.increaseGrade();
			std::cout << "Increased grade: " << Ana << std::endl;
		}
		catch(std::exception &e)
		{
			std::cout << "Exception caught: " << e.what() << std::endl;
		}

	std::cout << std::endl << "--------------------------------------------------------------------" << std::endl;

	std::cout << std::endl << "7. Trying to increase a bureaucrat to grade higher than 150  " << std::endl;
		try
		{
			Bureaucrat	Ana = Bureaucrat("Ana", 148);
			std::cout << "Upon creation: " << Ana << std::endl;
			Ana.decreaseGrade();
			std::cout << "Increased grade: " << Ana << std::endl;
			Ana.decreaseGrade();
			std::cout << "Increased grade: " << Ana << std::endl;
			Ana.decreaseGrade();
			std::cout << "Increased grade: " << Ana << std::endl;
		}
		catch(std::exception &e)
		{
			std::cout << "Exception caught: " << e.what() << std::endl;
		}

	std::cout << std::endl << "--------------------------------------------------------------------" << std::endl;
	return (0);
}
