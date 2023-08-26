/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebelo <arebelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 12:25:08 by arebelo           #+#    #+#             */
/*   Updated: 2023/08/24 16:57:44 by arebelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

//Constructors
ShrubberyCreationForm::ShrubberyCreationForm( void ) : AForm()
{
	std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string target) : AForm("shrubbery creation", 145, 137), _target( target )
{
	//std::cout << "ShrubberyCreationForm constructor called" << std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const & src ) : AForm(src) , _target(src._target)
{
//	std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
	return ;
}

//Destructors
ShrubberyCreationForm::~ShrubberyCreationForm( void )
{
	//std::cout << "ShrubberyCreationForm destructor called" << std::endl;
	return ;
}

//Assignation overload
ShrubberyCreationForm &	ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs )
{
	std::cout << "Assignation not allowed for ShrubberyCreationForm's class" << std::endl;
	( void ) rhs;
	return (*this);
}

//Getters
std::string const &	ShrubberyCreationForm::getTarget( void ) const
{
	return (this->_target);
}

//Member functions and methods
AForm *	ShrubberyCreationForm::clone( void ) const
{
	AForm* clone = new ShrubberyCreationForm(*this);
	return (clone);
}


void	ShrubberyCreationForm::execute( Bureaucrat & executor ) const
{
	if (!this->getSignedStatus())
		throw NotSignedException();
	if (executor.getGrade() > this->getGradeExec())
		throw GradeTooLowException();
	std::ofstream file(_target + "_shrubbery");
	file << "       _-_       " << std::endl;
	file << "    /~~   ~~\\   " << std::endl;
	file << " /~~         ~~\\" << std::endl;
	file << "{               }" << std::endl;
	file << " \\  _-     -_  /" << std::endl;
	file << "   ~  \\\\ //  ~ " << std::endl;
	file << "_- -   | | _- _  " << std::endl;
	file << "  _ -  | |   -_  " << std::endl;
	file << "      // \\\\    " << std::endl;
	file.close();
	return ;
}

std::ostream &	operator<<( std::ostream & o, ShrubberyCreationForm const & rhs )
{
	o << "Name: " << rhs.getName() << std::endl
	<< "Signed Status: " << rhs.getSignedStatus() << std::endl
	<< "Grade required to sign: " << rhs.getGradeSign() << std::endl
	<< "Grade required to execute: " << rhs.getGradeExec() << std::endl
	<< "Target: " << rhs.getTarget() << std::endl;
	return (o);
}
