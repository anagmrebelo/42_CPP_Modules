/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebelo <arebelo@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 13:51:52 by arebelo           #+#    #+#             */
/*   Updated: 2022/06/28 16:14:45 by arebelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string type ) : _type(type)
{
	return ;
}

Weapon::~Weapon( void )
{
	return ;
}

std::string	Weapon::getType( void ) const
{
	return this->_type;
}

void	Weapon::setType( std::string str )
{
	this->_type = str;
	return ;
}
