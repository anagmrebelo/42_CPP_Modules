/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebelo <arebelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 19:12:31 by arebelo           #+#    #+#             */
/*   Updated: 2023/05/02 11:19:02 by arebelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"

//Constructors
Dog::Dog( void ) : AAnimal( "Dog" )
{
	std::cout << "Dog default constructor called" << std::endl;
	this->_brain = new Brain();
	return ;
}

Dog::Dog( Dog const & src )
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->_type = src.getType();
	this->_brain = new Brain();
	*this->_brain = src.getBrain();
	return ;
}

//Destructor
Dog::~Dog( void )
{
	std::cout << "Dog destructor was called" << std::endl;
	delete this->_brain;
}

//Assignment overload
Dog &	Dog::operator=( Dog const & rhs )
{
	this->_type = rhs.getType();
	if (this->_brain)
		delete this->_brain;
	this->_brain = new Brain();
	*this->_brain = rhs.getBrain();
	return (*this);
}

// Getters
Brain &	Dog::getBrain( void ) const
{
	return (*this->_brain);
}

//Member functions and methods
void	Dog::makeSound( void ) const
{
	std::cout << "Wof wof" << std::endl;
	return ;
}
