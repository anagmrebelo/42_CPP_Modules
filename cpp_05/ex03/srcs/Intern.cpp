/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebelo <arebelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 13:24:53 by arebelo           #+#    #+#             */
/*   Updated: 2023/08/24 16:28:35 by arebelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

//Constructors
Intern::Intern( void )
{
	//std::cout << "Intern default constructor called" << std::endl;
	return ;
}

Intern::Intern( Intern const & src )
{
	//std::cout << "Intern copy constructor called" << std::endl;
	( void ) src;
	return ;
}

//Destructors
Intern::~Intern( void )
{
	//std::cout << "Intern destructor called" << std::endl;
	return ;
}

//Assigantion Overload
Intern &	Intern::operator=( Intern const & rhs )
{
	( void ) rhs;
	return (*this);
}

//Member functions and methods

AForm *	Intern::makeForm( std::string formName, std::string target ) const
{
	ShrubberyCreationForm	shrubbery		= ShrubberyCreationForm(target);
	RobotomyRequestForm		robotomy		= RobotomyRequestForm(target);
	PresidentialPardonForm	presidential	= PresidentialPardonForm(target);
	int	i = 0;

	AForm*	forms[] = {&shrubbery, &robotomy, &presidential};
	
	while (i < 3)
	{
		if (formName.compare(forms[i]->getName()) == 0)
		{
			std::cout << "Intern creates " << formName << std::endl;
			return (forms[i]->clone());
		}
		i++;
	}
	std::cout << "Form not created: Insert valid type" << std::endl;
	return (NULL);
}
