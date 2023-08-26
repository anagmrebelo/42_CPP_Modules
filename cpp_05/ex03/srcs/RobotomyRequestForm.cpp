/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebelo <arebelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 16:11:27 by arebelo           #+#    #+#             */
/*   Updated: 2023/08/24 16:57:35 by arebelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

//Constructors
RobotomyRequestForm::RobotomyRequestForm( void ) : AForm()
{
	//std::cout << "RobotomyRequestForm default constructor called" << std::endl;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm( std::string target ) : AForm("robotomy request", 72, 45), _target( target )
{
	//std::cout << "RobotomyRequestForm constructor called" << std::endl;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const & src ) : AForm(src) , _target(src._target)
{
//	std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
	return ;
}

//Destructors
RobotomyRequestForm::~RobotomyRequestForm( void )
{
	//std::cout << "RobotomyRequestForm destructor called" << std::endl;
	return ;
}

//Assignation overload
RobotomyRequestForm &	RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs )
{
	std::cout << "Assignation not allowed for RobotomyRequestForm's class" << std::endl;
	( void ) rhs;
	return (*this);
}

//Getters
std::string const &	RobotomyRequestForm::getTarget( void ) const
{
	return (this->_target);
}

//Member functions and methods
AForm *	RobotomyRequestForm::clone( void ) const
{
	AForm* clone = new RobotomyRequestForm(*this);
	return (clone);
}

void	RobotomyRequestForm::execute( Bureaucrat & executor ) const
{
	if (!this->getSignedStatus())
		throw NotSignedException();
	if (executor.getGrade() > this->getGradeExec())
		throw GradeTooLowException();
	
	srand(time(0));
   	std::cout << this->getTarget();
   	if(rand() % 2)
   		std::cout << " has been robotomized." << std::endl;
   	else
   		std::cout << " robotomization failed." << std::endl;
	return ;
}

std::ostream &	operator<<( std::ostream & o, RobotomyRequestForm const & rhs )
{
	o << "Name: " << rhs.getName() << std::endl
	<< "Signed Status: " << rhs.getSignedStatus() << std::endl
	<< "Grade required to sign: " << rhs.getGradeSign() << std::endl
	<< "Grade required to execute: " << rhs.getGradeExec() << std::endl
	<< "Target: " << rhs.getTarget() << std::endl;
	return (o);
}
