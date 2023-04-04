/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebelo <arebelo@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 11:22:53 by arebelo           #+#    #+#             */
/*   Updated: 2022/07/06 11:46:12 by arebelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main( void )
{
	ClapTrap	instance1("Number one");
	ClapTrap	instance2("Number two");

	instance1.attack("Number two");
	instance2.takeDamage(instance1.getAttackDamage());
	instance2.beRepaired(20);
}
