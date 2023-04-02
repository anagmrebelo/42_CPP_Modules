/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebelo <arebelo@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 17:52:05 by arebelo           #+#    #+#             */
/*   Updated: 2022/06/27 18:38:25 by arebelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main( void )
{
	// Creates a new object in the stack
	Zombie	s = Zombie("Ana");
	//the object named "Ana" will announce itself
	s.announce();

	// Creates a new object in the heap
	Zombie	*p;
	//the object named "Rita" will announce itself
	p = newZombie("Rita");
	p->announce();

	//Creates a new object called "Mica" that announces itself and dies
	randomChump("Mica");

	delete p;	//Rita dies
	return (0);	//Ana dies
}
