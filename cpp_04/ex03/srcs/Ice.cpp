/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebelo <arebelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 13:32:14 by arebelo           #+#    #+#             */
/*   Updated: 2023/04/14 14:12:35 by arebelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Ice.hpp"

//Constructors
Ice::Ice( void )
{
	std::cout << "Ice default constructor called" << std::endl;
	this->_type = "ice";
	return ;
}

Ice::Ice( Ice const & src )
{
	std::cout << "Ice copy constructor called" << std::endl;
	this->_type = "ice";
	(void) src;
	return ;	
}

//Destructor
Ice::~Ice( void )
{
	std::cout << "Ice destructor called" << std::endl;
	return ;
}

//Assignation overload
Ice &	Ice::operator=( Ice const & rhs )
{
	(void) rhs;
	return (*this);
}

//Member functions and methods
AMateria *	Ice::clone( void ) const
{
	return (new Ice(*this));
}

void	Ice::use( ICharacter & target )
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	return ;
}