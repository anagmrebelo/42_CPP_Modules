/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebelo <arebelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 13:51:52 by arebelo           #+#    #+#             */
/*   Updated: 2023/04/13 14:06:02 by arebelo          ###   ########.fr       */
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

const std::string	& Weapon::getType( void ) const
{
	return this->_type;
}

void	Weapon::setType( std::string str )
{
	this->_type = str;
	return ;
}
