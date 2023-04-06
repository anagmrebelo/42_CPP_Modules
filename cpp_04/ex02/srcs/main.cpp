/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarebelo <anarebelo@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 18:19:40 by arebelo           #+#    #+#             */
/*   Updated: 2023/04/06 11:07:19 by anarebelo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/AAnimal.hpp"
#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"
#include "../inc/Brain.hpp"
#include <iostream>
#include <stdlib.h>

#define N 4

int	main( void )
{
	AAnimal ** animals = new AAnimal*[N];
	int	i;

	i = -1;
	while (++i < (N/2))
		animals[i] = new Dog();
	while (i++ < N )
		animals[i] = new Cat();
	
	std::cout << std::endl;
	
	while(--i > 0)
		delete animals[i];
	delete [] animals;

	// AAnimal hello;		//If uncommented should not compile
	return (0);	
}
