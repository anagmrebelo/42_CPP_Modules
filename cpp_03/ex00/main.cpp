/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebelo <arebelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 11:22:53 by arebelo           #+#    #+#             */
/*   Updated: 2023/04/05 14:30:44 by arebelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main( void )
{
	ClapTrap	instance1("First");
	ClapTrap	instance2("Second");

    std::cout << std::endl;
	instance1.attack("Second");
    std::cout << "First energy points are " << instance1.getEnergyPoints() << std::endl << std::endl;

	instance2.takeDamage(instance1.getAttackDamage());
	instance2.beRepaired(20);
    std::cout << "Second energy points are " << instance2.getEnergyPoints() << std::endl;
    std::cout << std::endl;
}
