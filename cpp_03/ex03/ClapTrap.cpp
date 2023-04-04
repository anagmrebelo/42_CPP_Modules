/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebelo <arebelo@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 10:40:32 by arebelo           #+#    #+#             */
/*   Updated: 2022/07/06 14:08:52 by arebelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

//Constructors
ClapTrap::ClapTrap( void )
{
	std::cout << "ClapTrap default constructor was called" << std::endl;
	return ;
}

ClapTrap::ClapTrap( std::string name ) : _name( name ), _hitpoints( 10 ), _energyPoints( 10 ), _attackDamage( 0 )
{
	std::cout << "ClapTrap constructor was called"<< std::endl;
	return ;
}

ClapTrap::ClapTrap( ClapTrap const & src )
{
	std::cout << "ClapTrap copying constructor was called" << std::endl;
	*this = src;
	return ;
}

//Destructor
ClapTrap::~ClapTrap( void )
{
	std::cout << "ClapTrap destructor was called" << std::endl;
	return ;
}

//Assignation overload
ClapTrap &	ClapTrap::operator=( ClapTrap const & rhs )
{
	this->_name = rhs.getName();
	this->_hitpoints = rhs.getHitpoints();
	this->_energyPoints = rhs._energyPoints;
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
	return (this->_hitpoints);
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
		std::cout << "ClapTrap " << this->_name << " attack " << target << " with " << this->_attackDamage << " points of damage!" << std::endl;
	return ;
}

void	ClapTrap::takeDamage( unsigned int amount )
{
	std::cout << "ClapTrap " << this->_name << " energy points after attack: ";
	if (this->_energyPoints >= amount)
	{
		this->_energyPoints -= amount;
		std::cout << this->_energyPoints << std::endl;
	}
	else
	{
		this->_energyPoints = 0;
		std::cout << this->_energyPoints << std::endl;
	}
	return ;
}

void	ClapTrap::beRepaired( unsigned int amount)
{
	this->_energyPoints += amount;
	std::cout << "ClapTrap " << this->_name << " energy points after repair: " << this->_energyPoints << std::endl;
	return ;
}
