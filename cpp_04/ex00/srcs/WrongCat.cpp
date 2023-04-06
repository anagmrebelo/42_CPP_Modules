/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarebelo <anarebelo@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 19:24:10 by arebelo           #+#    #+#             */
/*   Updated: 2023/04/06 09:51:46 by anarebelo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/WrongCat.hpp"

//Constructors
WrongCat::WrongCat( void ) : WrongAnimal( "WrongCat" )
{
	std::cout << "WrongCat default constructor called" << std::endl;
	return ;
}

WrongCat::WrongCat( WrongCat const & src )
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = src;
	return ;
}

//Destructor
WrongCat::~WrongCat( void )
{
	std::cout << "WrongCat destructor was called" << std::endl;
}

//Assignment overload
WrongCat &	WrongCat::operator=( WrongCat const & rhs )
{
	( void ) rhs;
	std::cout << "Does not make sense to call assigment overload; All WrongCats are initialized with type WrongCat" << std::endl;
	return (*this);
}

//Member functions and methods
void	WrongCat::makeSound( void ) const
{
	std::cout << "Miao Miao" << std::endl;
	return ;
}
