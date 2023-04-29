/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarebelo <anarebelo@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 19:24:10 by arebelo           #+#    #+#             */
/*   Updated: 2023/04/29 22:40:07 by anarebelo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"

//Constructors
Cat::Cat( void ) : Animal( "Cat" )
{
	std::cout << "Cat default constructor called" << std::endl;
	this->_brain = new Brain();
	return ;
}

Cat::Cat( Cat const & src )
{
	std::cout << "Cat copy constructor called" << std::endl;
	this->_type = src.getType();
	this->_brain = new Brain();
	*this->_brain = src.getBrain();
	return ;
}

//Destructor
Cat::~Cat( void )
{
	std::cout << "Cat destructor was called" << std::endl;
	delete this->_brain;
	return ;
}

//Assignment overload
Cat &	Cat::operator=( Cat const & rhs )
{
	this->_type = rhs.getType();
	if (this->_brain)
		delete this->_brain;
	this->_brain = new Brain();
	*this->_brain = rhs.getBrain();
	return (*this);
}

// Getters
Brain &	Cat::getBrain( void ) const
{
	return (*this->_brain);
}

//Member functions and methods
void	Cat::makeSound( void ) const
{
	std::cout << "Miao Miao" << std::endl;
	return ;
}
