/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebelo <arebelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 15:12:21 by arebelo           #+#    #+#             */
/*   Updated: 2023/04/13 19:03:28 by arebelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

//Constructors
DiamondTrap::DiamondTrap( void )
{
	std::cout << "DiamondTrap default constructor was called" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap( name + "_clap_name" )
{
	std::cout << "DiamondTrap constructor was called" << std::endl;
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 30;
	return;
}

DiamondTrap::DiamondTrap( DiamondTrap const & src )
{
	*this = src;
	return ;
}

//Destructor
DiamondTrap::~DiamondTrap( void )
{
	std::cout << "DiamondTrap destructor was called" << std::endl;
	return ;
}

//Assignation overload
DiamondTrap &	DiamondTrap::operator= (const DiamondTrap &rhs)
{
		this->_name = rhs.getName();
		this->ClapTrap::_name = rhs.getName() + "_clap_name";
		this->_hitPoints = rhs.getHitpoints();
		this->_energyPoints = rhs.getEnergyPoints();
		this->_attackDamage = rhs.getAttackDamage();
	return (*this);
}

//Member functions
void	DiamondTrap::attack( std::string const & target )
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI( void )
{
	std::cout << "_name: " << this->_name << "; ClapTrap::_name: " << ClapTrap::_name << std::endl;
	return ;
}
