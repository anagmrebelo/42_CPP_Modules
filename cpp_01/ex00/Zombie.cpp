/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebelo <arebelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 18:28:05 by arebelo           #+#    #+#             */
/*   Updated: 2023/04/05 19:28:50 by arebelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( std::string name ) : _name(name)
{
	return ;
}

Zombie::~Zombie ( void )
{
	std::cout << this->_name << " died" << std::endl;
	return ;
}

void	Zombie::announce( void ) const
{
	std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}
