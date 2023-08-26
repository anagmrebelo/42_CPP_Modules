/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebelo <arebelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 09:34:56 by arebelo           #+#    #+#             */
/*   Updated: 2023/08/24 16:53:24 by arebelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

//Constructors
Form::Form( void ) : _name( "" ), _signedStatus( 0 ), _gradeSign( 0 ), _gradeExec( 0 )
{
	//std::cout << "Form default constructor called" << std::endl;
	return ;
}

Form::Form( std::string name, int gradeSign, int gradeExec ) : _name( name ), _signedStatus( 0 ),
   _gradeSign( gradeSign ), _gradeExec( gradeExec )
{
	//std::cout << " Form constructor called" << std::endl;
	if (gradeSign < 1 || gradeExec < 1)
		throw Form::GradeTooHighException();
	else if (gradeSign > 150 || gradeExec > 150)
		throw Form::GradeTooLowException();
	return ;
}

Form::Form( Form const & src ) : _name( src._name ), _signedStatus( src._signedStatus ), _gradeSign( src._gradeSign ), _gradeExec( src._gradeExec )
{
//	std::cout << "Form copy constructor called" << std::endl;
	return ;
}

//Destructors
Form::~Form( void )
{
	//std::cout << "Form destructor called" << std::endl;
	return ;
}

//Assignation overload
Form &	Form::operator=( Form const & rhs )
{
	std::cout << "Assignation not allowed for Form's class" << std::endl;
	( void ) rhs;
	return (*this);
}

//Getters
std::string	const & Form::getName( void ) const
{
	return (this->_name);
}

bool	Form::getSignedStatus( void ) const
{
	return (this->_signedStatus);
}

int	Form::getGradeSign( void ) const
{
	return (this->_gradeSign);
}

int	Form::getGradeExec( void ) const
{
	return (this->_gradeExec);
}

//Exceptions
const char *	Form::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

const char *	Form::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

//Member functions and methods
std::ostream &	operator<<( std::ostream & o, Form const & rhs )
{
	o << "Name: " << rhs.getName() << std::endl
		<< "Signed Status: " << rhs.getSignedStatus() << std::endl
		<< "Grade required to sign: " << rhs.getGradeSign() << std::endl
		<< "Grade required to execute: " << rhs.getGradeExec() << std::endl;
	return (o);
}

void	Form::beSigned( Bureaucrat & bu )
{
	if (bu.getGrade() > this->_gradeSign)
		throw GradeTooLowException();
	else
		this->_signedStatus = 1;	
	return ;
}
