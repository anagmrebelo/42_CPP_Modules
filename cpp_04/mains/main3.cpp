/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 19:24:07 by gsmets            #+#    #+#             */
/*   Updated: 2021/03/26 21:31:46 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include <string>
#include <iostream>


int main() {

	std::cout << "1. Creating MateriaSource and learning two materias" << std::endl;
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
	std::cout << std::endl;

	std::cout << "2. Creating Character \"Gaspacho\" and equipping materials" << std::endl;
		Character* gaspacho = new Character("gaspacho");
		AMateria* tmp;
		tmp = src->createMateria("ice");
		gaspacho->equip(tmp);
		tmp = src->createMateria("cure");
		gaspacho->equip(tmp);
	//	std::cout << tmp << std::endl;
	std::cout << std::endl;


	std::cout << "3. Creating ICharacter \"Gaspacho2\" from a copy of Gaspacho and deleting Gaspacho to prove deep copy" << std::endl;
		ICharacter* gaspacho2 = new Character(*gaspacho);
		gaspacho->printMaterias();
		gaspacho2->printMaterias();
		delete gaspacho;
	std::cout << std::endl;

	std::cout << "4. creating ice and cure and equipping more (testing with too much) Materia" << std::endl;
		AMateria *cure = new Cure;
		AMateria *ice = new Ice;

		gaspacho2->equip(cure);
		gaspacho2->equip(ice);
		gaspacho2->equip(cure);
		gaspacho2->equip(ice);
		gaspacho2->printMaterias();
		//std::cout << "Ice spell (equipped on 3) XP is: " << ice->getXP() << std::endl;
		//std::cout << "Cure spell (equipped on 2) XP is: " << cure->getXP() << std::endl;
	std::cout << std::endl;

	std::cout << "5. using all equiped materias on new ICharacter bob" << std::endl;
		ICharacter *bob = new Character("Bob");

		gaspacho2->use(0, *bob);
		gaspacho2->use(1, *bob);
		gaspacho2->use(2, *bob);
		gaspacho2->use(3, *bob);
		gaspacho2->use(10, *bob);
		gaspacho2->use(-1, *bob);
		//std::cout << "Ice spell (equipped on 3) XP is: " << ice->getXP() << std::endl;
		//std::cout << "Cure spell (equipped on 2) XP is: " << cure->getXP() << std::endl;
	std::cout << std::endl;


	std::cout << "6. unequiping materias 2 and 3 and trying again" << std::endl;
		gaspacho2->printMaterias();
		std::cout << std::endl;
		gaspacho2->unequip(2);
		gaspacho2->unequip(3);
		gaspacho2->printMaterias();
		std::cout << std::endl;
		gaspacho2->printTrash();
		std::cout << std::endl;

		gaspacho2->use(0, *bob);
		gaspacho2->use(1, *bob);
		gaspacho2->use(2, *bob);
		gaspacho2->use(3, *bob);
		gaspacho2->use(10, *bob);
		gaspacho2->use(-1, *bob);
		//std::cout << "Ice spell (unequipped) XP is: " << ice->getXP() << std::endl;
		//std::cout << "Cure spell (unequipped) XP is: " << cure->getXP() << std::endl;
	std::cout << std::endl;

	std::cout << "7. requipping materias 2 and 3 in new order and trying again" << std::endl;
		gaspacho2->equip(ice);
		gaspacho2->equip(cure);
		gaspacho2->printMaterias();
		gaspacho2->printTrash();

		gaspacho2->use(0, *bob);
		gaspacho2->use(1, *bob);
		gaspacho2->use(2, *bob);
		gaspacho2->use(3, *bob);
		gaspacho2->use(10, *bob);
		gaspacho2->use(-1, *bob);

		gaspacho2->unequip(0);
		gaspacho2->unequip(1);
		gaspacho2->printTrash();

		//std::cout << "Ice spell (equiped on 2) XP is: " << ice->getXP() << std::endl;
		//std::cout << "Cure spell (equiped on 3) XP is: " << cure->getXP() << std::endl;
	std::cout << std::endl;

	std::cout << "8. Deleting bob, gaspacho2 and the MateriaSource" << std::endl;
		delete gaspacho2;
		delete bob;
	
		delete src;

	std::cout << std::endl;

	return (0);
}
