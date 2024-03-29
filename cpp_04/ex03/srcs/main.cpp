/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebelo <arebelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 18:26:19 by arebelo           #+#    #+#             */
/*   Updated: 2023/04/14 14:12:39 by arebelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/AMateria.hpp"
#include "../inc/IMateriaSource.hpp"
#include "../inc/MateriaSource.hpp"
#include "../inc/ICharacter.hpp"
#include "../inc/Character.hpp"
#include "../inc/Ice.hpp"
#include "../inc/Cure.hpp"
#include <iostream>

int main( void )
{
	std::cout << "1. Creating MateriaSource" << std::endl; 
		IMateriaSource* src = new MateriaSource();
		std::cout << std::endl;
		src->printMaterias();
	std::cout << std::endl;

// ------------------------------------------------------------------------------------ //

	std::cout << "2. \"src\" learning 5 materias" << std::endl;
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		
		std::cout << std::endl;
		Ice	*mat = new Ice();
		src->learnMateria(mat);
		delete	mat;

		std::cout << std::endl;
		src->printMaterias();
	std::cout << std::endl;

// ------------------------------------------------------------------------------------ //

	std::cout << "3. Creating Character \"vilma\" and \"oktorok\"" << std::endl;
		Character* vilma = new Character("vilma");
		vilma->printMaterias();
		std::cout << std::endl;

		Character* oktorok = new Character("oktorok");
		oktorok->printMaterias();
	std::cout << std::endl;

// ------------------------------------------------------------------------------------ //

	std::cout << "4. \"vilma\" trying to equip 5 materias and \"oktorok\" one materia" << std::endl;
		vilma->equip(NULL);
		
		AMateria* tmp;
		AMateria* tmp0;

		tmp0 = src->createMateria("ice");
		vilma->equip(tmp0);
		tmp = src->createMateria("ice");
		vilma->equip(tmp);
		tmp = src->createMateria("cure");
		vilma->equip(tmp);
		tmp = src->createMateria("cure");
		vilma->equip(tmp);
		
		tmp = src->createMateria("ice");
		vilma->equip(tmp);

		std::cout << std::endl;
		vilma->printMaterias();

		std::cout << std::endl;
		oktorok->equip(tmp);
		oktorok->equip(tmp);
		oktorok->printMaterias();
	std::cout << std::endl;

// ------------------------------------------------------------------------------------ //

	std::cout << "5. Testing Character Assignation overload \"vilma = oktorok\" for deep copy and changed vilma afterwards" << std::endl;	

		*oktorok = *vilma;
		
		vilma->unequip(0);
		delete tmp0;
		std::cout << "VILMA" << std::endl;
		vilma->printMaterias();
		std::cout << std::endl;

		std::cout << "OKTOROK" << std::endl;
		oktorok->printMaterias();
	std::cout << std::endl;

// ------------------------------------------------------------------------------------ //

	std::cout << "6. Testing character copy constructor for deep copy \"stardust = Character(vilma)\" and changed vilma afterwards" << std::endl;
		Character* stardust = new Character(*vilma);
		
		tmp0 = src->createMateria("ice");
		vilma->equip(tmp0);
		std::cout << "VILMA" << std::endl;
		vilma->printMaterias();
		std::cout << std::endl;

		std::cout << "STARDUST" << std::endl;
		stardust->printMaterias();


	std::cout << std::endl;

// ------------------------------------------------------------------------------------ //
	
	std::cout << "7. \"vilma\" using all equiped materias on \"oktorok\" " << std::endl;
		vilma->printMaterias();
		vilma->use(0, *oktorok);
		vilma->use(1, *oktorok);
		vilma->use(2, *oktorok);
		vilma->use(3, *oktorok);
		vilma->use(10, *oktorok);
		vilma->use(-1, *oktorok);
	std::cout << std::endl;

// ------------------------------------------------------------------------------------ //

	std::cout << "8. \"vilma\" trying to use unequiped materias on \"oktorok\" " << std::endl;
		vilma->unequip(0);
		delete tmp0;
		vilma->use(0, *oktorok);

	std::cout << std::endl;

// ------------------------------------------------------------------------------------ //

	std::cout << "9. New character \"lucifer\" equipping and unequipping materias" << std::endl;
		ICharacter* lucifer = new Character("lucifer");
		AMateria *cure = new Cure;
		AMateria *ice = new Ice;

		lucifer->equip(cure);
		lucifer->equip(ice);
		lucifer->equip(cure);
		lucifer->equip(ice);
		lucifer->unequip(0);
		lucifer->unequip(1);
		lucifer->unequip(2);
		lucifer->unequip(3);
		lucifer->equip(cure);
		lucifer->equip(ice);
		
		lucifer->unequip(3);
		lucifer->unequip(8);

		lucifer->printMaterias();

	std::cout << std::endl;

// ------------------------------------------------------------------------------------ //
	std::cout << "10. Deleting \"vilma\", \"oktorok\", \"stardust\" and \"lucifer\"" << std::endl;
	
	delete lucifer;
	delete stardust;
	delete oktorok;
	delete vilma;
	delete src;

	return (0);
}
