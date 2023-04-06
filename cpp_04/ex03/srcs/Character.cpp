/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebelo <arebelo@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 16:58:31 by arebelo           #+#    #+#             */
/*   Updated: 2022/07/11 18:30:26 by arebelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Character.hpp"

//Constructors
Character::Character( void )
{
	std::cout << "Character default constructor called" << std::endl;
	return ;
}

Character::Character( std::string name) : _name( name ), _tCounter( 0 )
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

	std::cout << "Character " << this->_name << " deconstructor called" << std::endl;
	i = 0;
	while (i < Character::_maxInv)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
		i++;
	}
	i = 0;
	if(this->_tCounter > 0)
	{
		while (i < this->_tCounter)
		{
			if (this->_trash[i])
				delete this->_trash[i];
			i++;
		}
	}
	return ;
}

//Assignation overload
Character &	Character::operator=( Character const & rhs )
{
	int	i;
	i = 0;
	while ( i < Character::_maxInv )
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
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
	{
		this->_inventory[i] = m;
		i = 0;
		while (i < this->_tCounter)
		{
			if (m == this->_trash[i])
				this->_trash[i] = 0;
			i++;
		}
	}
	else
		std::cout << "Character inventory is full; Free materia if necessary" << std::endl;
	return ;
}

void	Character::unequip( int idx )
{
	int i;
	int	j;

	i = 0;
	j = 0;
	while (j < this->_tCounter && j < Character::_maxTrash)
	{
		if (!this->_trash[j])
			break;
		j++;
	}
	if (j >= Character::_maxTrash )
	{
		std::cout << "Cannot unequip more materias" << std::endl;
		return;
	}
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
		this->_trash[j] = _inventory[idx];
		this->_inventory[idx] = NULL;
		if (j == this->_tCounter)
			this->_tCounter++;
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

void	Character::printTrash( void )
{
	int i;

	i = 0;
	while (i < this->_tCounter)
	{
		if (this->_trash[i])
			std::cout << this->getName() << " trash[" << i << "] = " << this->_trash[i]/*->getType() */<< std::endl;
		else
			std::cout << this->getName() << " trash[" << i << "] = " << this->_trash[i] << std::endl;
		i++;
	}
	return ;
}
