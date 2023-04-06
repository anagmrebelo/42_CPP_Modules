/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebelo <arebelo@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 12:52:06 by arebelo           #+#    #+#             */
/*   Updated: 2022/07/11 18:30:22 by arebelo          ###   ########.fr       */
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

//Destructor
MateriaSource::~MateriaSource( void )
{
	int	i;

	std::cout << "MateriaSource deconstructor called" << std::endl;
	i = 0;
	while (i < MateriaSource::_maxInv && this->_inventory[i])
	{
		delete this->_inventory[i];
		i++;
	}
	return ;
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