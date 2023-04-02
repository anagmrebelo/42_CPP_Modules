/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebelo <arebelo@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 15:22:46 by arebelo           #+#    #+#             */
/*   Updated: 2022/06/28 16:34:57 by arebelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name ) : _name(name)
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
	std::cout << this->_name << " attacks with his " << this->_weaponPtr->getType() << std::endl;
	return ;
}
