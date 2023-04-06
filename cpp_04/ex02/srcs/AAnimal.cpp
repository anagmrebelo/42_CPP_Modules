/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarebelo <anarebelo@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 18:02:33 by arebelo           #+#    #+#             */
/*   Updated: 2023/04/06 10:56:55 by anarebelo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/AAnimal.hpp"

//Constructors
AAnimal::AAnimal( void )
{
	std::cout << "AAnimal default constructor called" << std::endl;
	return ;
}

AAnimal::AAnimal( std::string type ) : _type(type)
{
	std::cout << "AAnimal constructor called" << std::endl;
	return ;
}

AAnimal::AAnimal( AAnimal const & src )
{
	std::cout << "AAnimal copy constructor called" << std::endl;
	*this = src;
	return ;
}

//Destructor
AAnimal::~AAnimal( void )
{
	std::cout << "AAnimal destructor called" << std::endl;
	return ;
}

//Assignation overload
AAnimal & AAnimal::operator=( AAnimal const & rhs )
{
	this->_type = rhs.getType();
	*this->_brain = rhs.getBrain();
	return (*this);
}

//Getters
std::string	AAnimal::getType( void ) const
{
	return (this->_type);
}

Brain &	AAnimal::getBrain( void ) const
{
	return (*this->_brain);
}

//Member functions and methods
void	AAnimal::makeSound( void ) const
{
	std::cout << "AAnimal sound" << std::endl;
	return ;
}
