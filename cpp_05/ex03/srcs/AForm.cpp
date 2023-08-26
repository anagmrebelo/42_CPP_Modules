/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebelo <arebelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 09:34:56 by arebelo           #+#    #+#             */
/*   Updated: 2023/08/24 16:57:04 by arebelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

//Constructors
AForm::AForm( void ) : _name( "" ), _signedStatus( 0 ), _gradeSign( 0 ), _gradeExec( 0 )
{
	//std::cout << "AForm default constructor called" << std::endl;
	return ;
}

AForm::AForm( std::string name, int gradeSign, int gradeExec ) : _name( name ), _signedStatus( 0 ),
   _gradeSign( gradeSign ), _gradeExec( gradeExec )
{
	//std::cout << " Form constructor called" << std::endl;
	if (gradeSign < 1 || gradeExec < 1)
		throw AForm::GradeTooHighException();
	else if (gradeSign > 150 || gradeExec > 150)
		throw AForm::GradeTooLowException();
	return ;
}

AForm::AForm( AForm const & src ) : _name( src._name ), _signedStatus( src._signedStatus ), _gradeSign( src._gradeSign ), _gradeExec( src._gradeExec )
{
//	std::cout << "AForm copy constructor called" << std::endl;
	return ;
}

//Destructors
AForm::~AForm( void )
{
	//std::cout << "AForm destructor called" << std::endl;
	return ;
}

//Assignation overload
AForm &	AForm::operator=( AForm const & rhs )
{
	std::cout << "Assignation not allowed for AForm's class" << std::endl;
	( void ) rhs;
	return (*this);
}

//Getters
std::string	const & AForm::getName( void ) const
{
	return (this->_name);
}

bool	AForm::getSignedStatus( void ) const
{
	return (this->_signedStatus);
}

int	AForm::getGradeSign( void ) const
{
	return (this->_gradeSign);
}

int	AForm::getGradeExec( void ) const
{
	return (this->_gradeExec);
}

//Exceptions
const char *	AForm::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

const char *	AForm::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

const char *	AForm::NotSignedException::what() const throw()
{
	return ("File not signed");
}

//Member functions and methods
std::ostream &	operator<<( std::ostream & o, AForm const & rhs )
{
	o << "Name: " << rhs.getName() << std::endl
		<< "Signed Status: " << rhs.getSignedStatus() << std::endl
		<< "Grade required to sign: " << rhs.getGradeSign() << std::endl
		<< "Grade required to execute: " << rhs.getGradeExec()<< std::endl;
	return (o);
}

void	AForm::beSigned( Bureaucrat & bu )
{
	if (bu.getGrade() > this->_gradeSign)
		throw GradeTooLowException();
	else
		this->_signedStatus = 1;	
	return ;
}