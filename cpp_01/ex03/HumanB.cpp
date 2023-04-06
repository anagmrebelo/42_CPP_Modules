/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebelo <arebelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 15:22:46 by arebelo           #+#    #+#             */
/*   Updated: 2023/04/05 19:33:33 by arebelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name ) : _name(name), _weaponPtr(nullptr)
{
	return ;
}

HumanB::~HumanB( void )
{
	return ;
}

void	HumanB::setWeapon( Weapon & weapon )
{
	this->_weaponPtr = &weapon;
	return ;
}

void	HumanB::attack( void ) const
{
	if (this->_weaponPtr)
		std::cout << this->_name << " attacks with his " << this->_weaponPtr->getType() << std::endl;
	else
		std::cout << this->_name << " cannot attack without weapon" << std::endl; 
	return ;
}
