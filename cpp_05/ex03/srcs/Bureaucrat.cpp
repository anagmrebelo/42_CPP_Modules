/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebelo <arebelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 17:47:26 by arebelo           #+#    #+#             */
/*   Updated: 2023/08/24 16:57:18 by arebelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"

//Constructors
Bureaucrat::Bureaucrat( void )
{
	//std::cout << "Bureaucrat default constructor called" << std::endl;
	return ;
}

Bureaucrat::Bureaucrat( Bureaucrat const & src ) : _name( src.getName() )
{
	//std::cout << "Bureaucrat copy constructor called" << std::endl;
	*this = src;
	return;
}

Bureaucrat::Bureaucrat( std::string name, int grade ) : _name( name ), _grade( 0 )
{
	//std::cout << "Bureaucrat constructor called" << std::endl;
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade = grade;
	return ;
}

//Destructors
Bureaucrat::~Bureaucrat( void )
{
	//std::cout << "Bureaucrat destructor called" << std::endl;
	return ;
}

//Assigantion Overload
Bureaucrat &	Bureaucrat::operator=( Bureaucrat const & rhs )
{
	this->_grade = rhs.getGrade();
	return (*this);
}

//Getters
std::string const &	Bureaucrat::getName( void ) const
{
	return (this->_name);
}

int	Bureaucrat::getGrade( void ) const
{
	return (this->_grade);
}

//Member Functions and methods
void	Bureaucrat::increaseGrade( void )
{
	if (this->_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade--;
	return ;	
}

void	Bureaucrat::decreaseGrade( void )
{
	if (this->_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade++;
	return ;
}

std::ostream &	operator<<( std::ostream & o,  Bureaucrat const & rhs )
{
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << "." << std::endl;
	return (o);
}

void	Bureaucrat::signForm( AForm & src)
{
	std::cout << this->_name;
	if (src.getSignedStatus())
	{
		std::cout << " couldn't sign " << src.getName() << " because form is already signed" << std::endl;
		return ;
	}
	try
	{
		src.beSigned(*this);
		std::cout << " signed " << src.getName() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << " couldn't sign " << src.getName() << " because bureaucrat has not enough clearance" << std::endl;
	}
	return ;
}

void	Bureaucrat::executeForm( AForm const & form )
{
	try
	{
		form.execute(*this);
		std::cout << this->_name << " executed " << form.getName() << std::endl;
	}
	catch (ShrubberyCreationForm::NotSignedException & e)
	{
		std::cout << this->_name << " couldn't execute " << form.getName() << " because form is not signed" << std::endl;
	}
	catch (AForm::GradeTooLowException & e)
	{
		std::cout << this->_name << " couldn't execute " << form.getName() << " because bureaucrat has not enough clearance" << std::endl;
	}
	return ;
}


//Exceptions
const char *	Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Maximum grade is 1");
}

const char *	Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Minimum grade is 150");
}
