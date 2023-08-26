/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebelo <arebelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 16:52:04 by arebelo           #+#    #+#             */
/*   Updated: 2023/08/24 16:54:39 by arebelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

//Constructors
PresidentialPardonForm::PresidentialPardonForm( void ) : AForm()
{
	//std::cout << "PresidentialPardonForm default constructor called" << std::endl;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm( std::string target) : AForm("PresidentialPardonForm", 25, 5), _target( target )
{
	//std::cout << "PresidentialPardonForm constructor called" << std::endl;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const & src ) : AForm(src) , _target(src._target)
{
//	std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
	return ;
}

//Destructors
PresidentialPardonForm::~PresidentialPardonForm( void )
{
	//std::cout << "PresidentialPardonForm destructor called" << std::endl;
	return ;
}

//Assignation overload
PresidentialPardonForm &	PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs )
{
	std::cout << "Assignation not allowed for PresidentialPardonForm's class" << std::endl;
	( void ) rhs;
	return (*this);
}

//Getters
std::string	const & PresidentialPardonForm::getTarget( void ) const
{
	return (this->_target);
}

//Member functions and methods
void	PresidentialPardonForm::execute( Bureaucrat & executor ) const
{
	if (!this->getSignedStatus())
		throw NotSignedException();
	if (executor.getGrade() > this->getGradeExec())
		throw GradeTooLowException();
	std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
	return ;
}

std::ostream &	operator<<( std::ostream & o, PresidentialPardonForm const & rhs )
{
	o << "Name: " << rhs.getName() << std::endl
	<< "Signed Status: " << rhs.getSignedStatus() << std::endl
	<< "Grade required to sign: " << rhs.getGradeSign() << std::endl
	<< "Grade required to execute: " << rhs.getGradeExec() << std::endl
	<< "Target: " << rhs.getTarget() << std::endl;
	return (o);
}
