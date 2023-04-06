/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebelo <arebelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 14:36:26 by arebelo           #+#    #+#             */
/*   Updated: 2023/04/06 16:55:59 by arebelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

//Constructors
FragTrap::FragTrap( void )
{
	std::cout << "FragTrap default constructor was called" << std::endl;
	return ;
}

FragTrap::FragTrap( std::string name ) 
{
	std::cout << "FragTrap constructor was called" << std::endl;
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	return ;
}

FragTrap::FragTrap( FragTrap const & src )
{
	std::cout << "FragTrap copy constructor was called" << std::endl;
	*this = src;
}

//Destructor
FragTrap::~FragTrap( void )
{
	std::cout << "FragTrap destructor was called" << std::endl;
	return ;
}

//Assignation overload
FragTrap & FragTrap::operator=( FragTrap const & rhs )
{
	this->_name = rhs.getName();
	this->_hitPoints = rhs.getHitpoints();
	this->_energyPoints = rhs.getEnergyPoints();
	this->_attackDamage = rhs.getAttackDamage();
	return (*this);
}

//Member functions
void	FragTrap::highFivesGuys( void )
{
	std::cout << "FragTrap requests you to high five someone!" << std::endl;
	return ;
}

void	FragTrap::attack( std::string const & target )
{
	if (this->_energyPoints > 0)
	{
		std::cout << "FragTrap " << this->getName() << " attacks " << target << " with " << this->getAttackDamage() << " points of damage!" << std::endl;
		this->_energyPoints--;
	}
	return ;
}
