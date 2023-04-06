									/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebelo <arebelo@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 13:32:14 by arebelo           #+#    #+#             */
/*   Updated: 2022/07/11 18:05:05 by arebelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cure.hpp"

//Constructors
Cure::Cure( void )
{
	std::cout << "Cure default constructor called" << std::endl;
	this->_type = "cure";
	return ;
}

Cure::Cure( Cure const & src )
{
	std::cout << "Cure copy constructor called" << std::endl;
	this->_type = "cure";
	(void) src;			
	return ;
}

//Destructor
Cure::~Cure( void )
{
	std::cout << "Cure destructor called" << std::endl;
	return ;
}

//Assignation overload
Cure &	Cure::operator=( Cure const & rhs )
{
	(void) rhs;
	return (*this);
}

//Member functions and methods
AMateria *	Cure::clone( void ) const
{
	return (new Cure(*this));
}

void	Cure::use( ICharacter & target )
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	return ;
}
