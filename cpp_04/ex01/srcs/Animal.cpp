/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarebelo <anarebelo@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 18:02:33 by arebelo           #+#    #+#             */
/*   Updated: 2023/04/29 22:39:07 by anarebelo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"

//Constructors
Animal::Animal( void )
{
	std::cout << "Animal default constructor called" << std::endl;
	return ;
}

Animal::Animal( std::string type ) : _type(type)
{
	std::cout << "Animal constructor called" << std::endl;
	return ;
}

Animal::Animal( Animal const & src )
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = src;
	return ;
}

//Destructor
Animal::~Animal( void )
{
	std::cout << "Animal destructor called" << std::endl;
	return ;
}

//Assignation overload
Animal & Animal::operator=( Animal const & rhs )
{
	this->_type = rhs.getType();
	return (*this);
}

//Getters
std::string	Animal::getType( void ) const
{
	return (this->_type);
}

//Member functions and methods
void	Animal::makeSound( void ) const
{
	std::cout << "Animal sound" << std::endl;
	return ;
}
