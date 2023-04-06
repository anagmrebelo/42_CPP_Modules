/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebelo <arebelo@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 18:26:19 by arebelo           #+#    #+#             */
/*   Updated: 2022/07/12 23:36:02 by arebelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"
#include "AMateria.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "IMateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int	main( void )
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	
	ICharacter*	me = new Character("me");
	
	AMateria*	tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	ICharacter* marc = new Character("marc");
	
	std::cout << std::endl;
	me->use(0, *bob);
	me->use(1, *bob);
	std::cout << std::endl;

	Character *Ana = new Character("ana");
	Character *Pedro = new Character("pedro");
	*Ana = *Pedro;
	std::cout << Ana << std::endl;
	std::cout << Pedro << std::endl;
	std::cout << Ana->getName() << std::endl;
	std::cout << Pedro->getName() << std::endl;
	std::cout << std::endl;

	Character *Isabel = new Character(*Pedro);
	std::cout << Pedro << std::endl;
	std::cout << Isabel << std::endl;
	std::cout << Pedro->getName() << std::endl;
	std::cout << Isabel->getName() << std::endl;
	std::cout << std::endl;

	me->use(0, *marc);
	me->use(1, *marc);
	std::cout << std::endl;

	me->unequip(5);
	me->use(0, *bob);
	std::cout << std::endl;

	me->unequip(0);
	me->use(0, *bob);
	std::cout << std::endl;

	delete marc;
	delete bob;
	delete me;
	delete src;

	return (0);
}
