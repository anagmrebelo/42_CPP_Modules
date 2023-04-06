/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarebelo <anarebelo@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 18:19:40 by arebelo           #+#    #+#             */
/*   Updated: 2023/04/06 09:57:41 by anarebelo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"
#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"
#include "../inc/WrongAnimal.hpp"
#include "../inc/WrongCat.hpp"
#include <iostream>

int	main( void )
{
	const Animal*	meta = new Animal();
	const Animal*	j = new Dog();
	const Animal*	i = new Cat();

	std::cout << std::endl;
	std::cout << j->getType() << std::endl;
	std::cout << i->getType() << std::endl;
	std::cout << meta->getType() << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	std::cout << std::endl;
	delete meta;
	delete j;
	delete i;

	std::cout << std::endl << std::endl;

	const WrongAnimal*	meta1 = new WrongAnimal();
	const WrongAnimal*	i1 = new WrongCat();

	std::cout << std::endl;
	std::cout << i1->getType() << std::endl;
	std::cout << meta1->getType() << std::endl;
	i1->makeSound(); //will output the WrongAnimal sound!
	meta1->makeSound();
	std::cout << std::endl;
	delete i1;
	delete meta1;
	
}
