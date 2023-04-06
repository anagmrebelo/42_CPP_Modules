/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarebelo <anarebelo@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 19:24:10 by arebelo           #+#    #+#             */
/*   Updated: 2023/04/06 09:45:24 by anarebelo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"

//Constructors
Cat::Cat( void ) : Animal( "Cat" )
{
	std::cout << "Cat default constructor called" << std::endl;
	return ;
}

Cat::Cat( Cat const & src )
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = src;
	return ;
}

//Destructor
Cat::~Cat( void )
{
	std::cout << "Cat destructor was called" << std::endl;
}

//Assignment overload
Cat &	Cat::operator=( Cat const & rhs )
{
	( void ) rhs;
	std::cout << "Does not make sense to call assigment overload; All Cats are initialized with type Cat" << std::endl;
	return (*this);
}

//Member functions and methods
void	Cat::makeSound( void ) const
{
	std::cout << "Miao Miao" << std::endl;
	return ;
}
