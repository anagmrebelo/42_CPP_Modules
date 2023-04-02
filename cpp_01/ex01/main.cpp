/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarebelo <anarebelo@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 17:52:05 by arebelo           #+#    #+#             */
/*   Updated: 2023/04/02 22:46:27 by anarebelo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main( void )
{
	Zombie*	array;
	int i;

	i = 5;
	array = zombieHorde(i, "Ana");
	while (--i >= 0)
		array[i].announce();
	delete [] array;
	return (0);
}
