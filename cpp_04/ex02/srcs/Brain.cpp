/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarebelo <anarebelo@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 12:30:48 by arebelo           #+#    #+#             */
/*   Updated: 2023/04/06 10:36:11 by anarebelo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Brain.hpp"

//Constructors
Brain::Brain( void )
{
	std::cout << "Brain default constructor called" << std::endl;
	return ;
}

Brain::Brain( Brain const & src )
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = src;
	return ;
}

//Destructor
Brain::~Brain( void )
{
	std::cout << "Brain destructor called" << std::endl;
	return ;
}

//Assignation overload
Brain &	Brain::operator=( Brain const & rhs )
{
	int	i;

	i = 0;
	while (i < 100)
	{
		this->_ideas[i] = rhs.getIdeas(i);
		i++;
	}
	return (*this);
}

//Getters
std::string	Brain::getIdeas( int i ) const
{
	if (i < 0 || i > 99)
	{
		std::cout << i << " is not a valid number; Returned empty string";
		return ("");
	}
	return (this->_ideas[i]);
}

//Setters
void		Brain::setIdeas( int i, std::string idea )
{
	if (i < 0 || i > 99)
		return ;
	this->_ideas[i] = idea;
	return ;
}
