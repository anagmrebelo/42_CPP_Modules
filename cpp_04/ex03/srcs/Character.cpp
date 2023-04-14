/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebelo <arebelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 16:58:31 by arebelo           #+#    #+#             */
/*   Updated: 2023/04/14 14:12:16 by arebelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Character.hpp"

//Constructors
Character::Character( void )
{
	std::cout << "Character default constructor called" << std::endl;
	return ;
}

Character::Character( std::string name) : _name( name )
{
	int	i;

	std::cout << "Character constructor called" << std::endl;
	i = 0;
	while (i < Character::_maxInv)
	{
		this->_inventory[i] = NULL;
		i++;
	}
	return ;
}

Character::Character( Character const & src ) : _name( src.getName() )
{
	std::cout << "Character copy constructor called" << std::endl;
	int	i;
	
	i = 0;
	while ( i < Character::_maxInv )
	{
		if (src._inventory[i])
			this->_inventory[i] = src._inventory[i]->clone();
		i++;
	}
	return;
}

//Destructor
Character::~Character( void )
{
	int	i;
	int j;

	std::cout << "Character " << this->_name << " deconstructor called" << std::endl;
	i = 0;
	while (i < Character::_maxInv)
	{
		if (this->_inventory[i])
		{
			delete this->_inventory[i];
			j = i + 1;
			while (j < Character::_maxInv)
			{
				if (this->_inventory[j] == this->_inventory[i])
					this->_inventory[j] = NULL;
				j++;
			}
		}
		i++;
	}
	return ;
}

//Assignation overload
Character &	Character::operator=( Character const & rhs )
{
	int	i;
	int	j;

	i = 0;
	while ( i < Character::_maxInv )
	{
		if (this->_inventory[i])
		{
			delete this->_inventory[i];
			j = i + 1;
			while (j < Character::_maxInv)
			{
				if (this->_inventory[j] == this->_inventory[i])
					this->_inventory[j] = NULL;
				j++;
			}
		}
		if (rhs._inventory[i])
			this->_inventory[i] = rhs._inventory[i]->clone();
		else
			this->_inventory[i] = NULL;
		i++;
	}
	this->_name = rhs.getName();
	return (*this);
}

//Getters
std::string const &	Character::getName( void ) const
{
	return (this->_name);	
}

//Member functions and methods
void	Character::equip( AMateria * m )
{
	int	i;

	if (!m)
	{
		std::cout << "Insert valid input to equip (different from NULL)" << std::endl;
		return ;
	}
	i = 0;
	while (i < Character::_maxInv && _inventory[i])
		i++;
	if (i < Character::_maxInv)
		this->_inventory[i] = m;
	else
		std::cout << "Character inventory is full; Free materia if necessary" << std::endl;
	return ;
}

void	Character::unequip( int idx )
{
	int	i;

	i = 0;
	if (idx < Character::_maxInv && idx >= 0 && this->_inventory[idx])
	{
		while(i < Character::_maxInv)
		{
			if (i != idx && this->_inventory[idx] == this->_inventory[i])
			{
				this->_inventory[idx] = NULL;
				return ;
			}
			i++;
		}
		this->_inventory[idx] = NULL;
	}
	else
		std::cout << "Insert valid input" << std::endl;
	return ;
}

void	Character::use( int idx, ICharacter & target )
{
	if (idx < Character::_maxInv && idx >= 0 && this->_inventory[idx])
		this->_inventory[idx]->use(target);
	else
		std::cout << "Invalid idx" << std::endl;
	return ;
}

void	Character::printMaterias( void )
{
	int i;

	i = 0;
	while (i < Character::_maxInv)
	{
		if (this->_inventory[i])
			std::cout << this->getName() << " inventory[" << i << "] = " << this->_inventory[i]/*->getType() */<< std::endl;
		else
			std::cout << this->getName() << " inventory[" << i << "] = " << this->_inventory[i] << std::endl;
		i++;
	}
	return ;
}
