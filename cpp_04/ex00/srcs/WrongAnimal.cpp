/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarebelo <anarebelo@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 18:02:33 by arebelo           #+#    #+#             */
/*   Updated: 2023/04/06 09:51:20 by anarebelo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/WrongAnimal.hpp"

//Constructors
WrongAnimal::WrongAnimal( void )
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal( std::string type ) : _type(type)
{
	std::cout << "WrongAnimal constructor called" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal( WrongAnimal const & src )
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = src;
	return ;
}

//Destructor
WrongAnimal::~WrongAnimal( void )
{
	std::cout << "WrongAnimal destructor called" << std::endl;
	return ;
}

//Assignation overload
WrongAnimal & WrongAnimal::operator=( WrongAnimal const & rhs )
{
	this->_type = rhs.getType();
	return (*this);
}

//Getters
std::string	WrongAnimal::getType( void ) const
{
	return (this->_type);
}

//Member functions and methods
void	WrongAnimal::makeSound( void ) const
{
	std::cout << "WrongAnimal sound" << std::endl;
	return ;
}
