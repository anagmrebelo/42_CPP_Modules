/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebelo <arebelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 18:42:15 by arebelo           #+#    #+#             */
/*   Updated: 2023/04/05 19:31:46 by arebelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	int	i;

	i = 0;
	Zombie*	array = new	Zombie[N];
	while (i < N)
	{
		array[i].setName(name);
		i++;
	}
	
	return (array);	
}
