/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarebelo <anarebelo@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 19:12:31 by arebelo           #+#    #+#             */
/*   Updated: 2023/04/06 09:46:09 by anarebelo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"

//Constructors
Dog::Dog( void ) : Animal( "Dog" )
{
	std::cout << "Dog default constructor called" << std::endl;
	return ;
}

Dog::Dog( Dog const & src )
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = src;
	return ;
}

//Destructor
Dog::~Dog( void )
{
	std::cout << "Dog destructor was called" << std::endl;
}

//Assignment overload
Dog &	Dog::operator=( Dog const & rhs )
{
	( void ) rhs;
	std::cout << "Does not make sense to call assigment overload; All dogs are initialized with type Dog" << std::endl;
	return (*this);
}

//Member functions and methods
void	Dog::makeSound( void ) const
{
	std::cout << "Wof wof" << std::endl;
	return ;
}
