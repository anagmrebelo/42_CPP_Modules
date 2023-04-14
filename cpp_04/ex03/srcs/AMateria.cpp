/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebelo <arebelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 17:44:36 by arebelo           #+#    #+#             */
/*   Updated: 2023/04/14 14:12:12 by arebelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/AMateria.hpp"

//Constructors
AMateria::AMateria( void )
{
	std::cout << "AMateria default constructor called" << std::endl;
	return ;
}

AMateria::AMateria( std::string const & type ) : _type( type )
{
	std::cout << "AMateria constructor called" << std::endl;
	return;
}

AMateria::AMateria( AMateria const & src )
{
	std::cout << "Do not copy AMateria; New default instance of AMteria created " << std::endl;
	( void ) src;
	return ;
}

//Destructor
AMateria::~AMateria( void )
{
	std::cout << "AMateria destructor called" << std::endl;
	return ;	
}

//Assignation overload
AMateria &	AMateria::operator=( AMateria const & rhs)
{
	std::cout << "Do not copy AMateria; LHS returned" << std::endl;
	( void ) rhs;
	return (*this);
}

//Getters
std::string const & AMateria::getType( void ) const
{
	return (this->_type);
}
