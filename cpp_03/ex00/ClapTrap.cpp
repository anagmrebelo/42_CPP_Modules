/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarebelo <anarebelo@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 10:40:32 by arebelo           #+#    #+#             */
/*   Updated: 2023/04/05 01:14:10 by anarebelo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

//Constructors
ClapTrap::ClapTrap( void )
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap( std::string name ) : _name( name ), _hitPoints( 10 ), _energyPoints( 10 ), _attackDamage( 0 )
{
	std::cout << "Constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap( ClapTrap const & src )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

//Destructor
ClapTrap::~ClapTrap( void )
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

//Assignation overload
ClapTrap &	ClapTrap::operator=( ClapTrap const & rhs )
{
	this->_name = rhs.getName();
	this->_hitPoints = rhs.getHitpoints();
	this->_energyPoints = rhs.getEnergyPoints();
	this->_attackDamage = rhs.getAttackDamage();
	return (*this);
}

//Getters

std::string	ClapTrap::getName( void ) const
{
	return (this->_name);
}

int	ClapTrap::getHitpoints( void ) const
{
	return (this->_hitPoints);
}

int	ClapTrap::getEnergyPoints( void ) const
{
	return (this->_energyPoints);
}

int	ClapTrap::getAttackDamage( void ) const
{
	return (this->_attackDamage);
}

//Member functions
void	ClapTrap::attack( std::string const & target )
{
		if (this->_energyPoints > 0)
			std::cout << "ClapTrap " << this->_name << " attack " << target << " with " << this->_attackDamage << " points of damage!" << std::endl;
			this->_energyPoints--;
	return ;
}

void	ClapTrap::takeDamage( unsigned int amount )
{
	std::cout << "ClapTrap " << this->_name << " hit points after attack: ";
	if (this->_hitPoints >= amount)
		this->_hitPoints -= amount;
	else
		this->_hitPoints = 0;
	std::cout << this->_hitPoints << std::endl;
	return ;
}

void	ClapTrap::beRepaired( unsigned int amount)
{
	if (this->_energyPoints > 0)
	{
		this->_hitPoints += amount;
		std::cout << "ClapTrap " << this->_name << " hit points after repair: " << this->_hitPoints << std::endl;
	}
	return ;
}
