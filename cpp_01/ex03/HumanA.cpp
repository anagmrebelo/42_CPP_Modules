/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebelo <arebelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 14:16:59 by arebelo           #+#    #+#             */
/*   Updated: 2023/04/05 19:33:18 by arebelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon & input ) : _name(name) , _weaponRef(input)
{
	return ;
}

HumanA::~HumanA( void )
{
	return ;
}

void	HumanA::attack( void ) const
{
	std::cout << this->_name << " attacks with his " << this->_weaponRef.getType() << std::endl;
}
