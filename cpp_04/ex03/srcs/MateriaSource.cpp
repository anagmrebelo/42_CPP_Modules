/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebelo <arebelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 12:52:06 by arebelo           #+#    #+#             */
/*   Updated: 2023/04/14 14:23:26 by arebelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/MateriaSource.hpp"

//Constructors
MateriaSource::MateriaSource( void ) : _counter( 0 )
{
	int	i;

	std::cout <<"MateriaSource default constructor called" << std::endl;
	i = 0;
	while (i < MateriaSource::_maxInv)
	{
		this->_inventory[i] = NULL;
		i++;
	}
	return ;
}

MateriaSource::MateriaSource( MateriaSource const & src  ) : _counter( src._counter )
{
	int	i;

	std::cout <<"MateriaSource default constructor called" << std::endl;
	i = 0;
	while (i < MateriaSource::_maxInv)
	{
		this->_inventory[i] = src._inventory[i];
		i++;
	}
	return ;
}

//Destructor
MateriaSource::~MateriaSource( void )
{
	int	i;
	int j;

	std::cout << "MateriaSource deconstructor called" << std::endl;
	i = 0;
	while (i < MateriaSource::_maxInv)
	{
		if (this->_inventory[i])
		{
			delete this->_inventory[i];
			j = i + 1;
			while (j < MateriaSource::_maxInv)
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
MateriaSource &	MateriaSource::operator=( MateriaSource const & rhs )
{
	int	i;
	int	j;

	i = 0;
	while ( i < MateriaSource::_maxInv )
	{
		if (this->_inventory[i])
		{
			delete this->_inventory[i];
			j = i + 1;
			while (j < MateriaSource::_maxInv)
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
	this->_counter = rhs._counter;
	return (*this);
}

//Member functions and methods
void	MateriaSource::learnMateria( AMateria* src )
{
	if (this->_counter < MateriaSource::_maxInv)
	{
		this->_inventory[this->_counter] = src;
		this->_counter++;
	}
	else
		std::cout << "Materia not learnt; Don't forget to free the materia if necessary" << std::endl;
	return ;
}

AMateria *	MateriaSource::createMateria( std::string const & type )
{
	int	i;

	i = 0;
	while (i < MateriaSource::_maxInv)
	{
		if (this->_inventory[i]->getType().compare(type) == 0)
			return (this->_inventory[i]->clone());
		i++;
	}
	return (0);
}

void	MateriaSource::printMaterias( void )
{
	int i;

	i = 0;
	while (i < MateriaSource::_maxInv)
	{
		if (this->_inventory[i])
			std::cout << "Inventory[" << i << "] = " << this->_inventory[i]->getType() << std::endl;
		else
			std::cout << "Inventory[" << i << "] = " << this->_inventory[i] << std::endl;
		i++;
	}
	return ;
}