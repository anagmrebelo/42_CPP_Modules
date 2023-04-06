/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebelo <arebelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 17:52:05 by arebelo           #+#    #+#             */
/*   Updated: 2023/04/05 19:29:52 by arebelo          ###   ########.fr       */
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
