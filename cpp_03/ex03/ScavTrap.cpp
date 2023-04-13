/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebelo <arebelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 13:16:30 by arebelo           #+#    #+#             */
/*   Updated: 2023/04/13 16:01:27 by arebelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

//Constructors
ScavTrap::ScavTrap( void )
{
	std::cout << "ScavTrap default constructor was called" << std::endl;
	return ;
}

ScavTrap::ScavTrap( std::string name ) 
{
	std::cout << "ScavTrap constructor was called" << std::endl;
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	return ;
}

ScavTrap::ScavTrap( ScavTrap const & src )
{
	std::cout << "ScavTrap copy constructor was called" << std::endl;
	*this = src;
}

//Destructor
ScavTrap::~ScavTrap( void )
{
	std::cout << "ScavTrap destructor was called" << std::endl;
	return ;
}

//Assignation overload
ScavTrap & ScavTrap::operator=( ScavTrap const & rhs )
{
	this->_name = rhs.getName();
	this->_hitPoints = rhs.getHitpoints();
	this->_energyPoints = rhs.getEnergyPoints();
	this->_attackDamage = rhs.getAttackDamage();
	return (*this);
}

//Member functions
void	ScavTrap::guardGate( void )
{
	std::cout << "ScavTrap has entered in Gate keeper mode" << std::endl;
	return ;
}

void	ScavTrap::attack( std::string const & target )
{
	if (this->_energyPoints > 0)
	{
		std::cout << "ScavTrap " << this->getName() << " attacks " << target << " with " << this->getAttackDamage() << " points of damage!" << std::endl;
		this->_energyPoints--;
	}
	return ;
}
