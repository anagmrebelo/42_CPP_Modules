/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebelo <arebelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 11:22:53 by arebelo           #+#    #+#             */
/*   Updated: 2023/04/06 16:55:14 by arebelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main( void )
{
	ClapTrap	instanceC("Clap");
	ScavTrap	instanceS("Scav");
	FragTrap	instanceF("Frag");

	std::cout << std::endl;
	
	std::cout << instanceC.getName() << std::endl;
	std::cout << "Hitpoints: " << instanceC.getHitpoints() << std::endl;
	std::cout << "Energy Points: " << instanceC.getEnergyPoints() << std::endl;
	std::cout << "Attack Damage: "<< instanceC.getAttackDamage() << std::endl;
	instanceC.attack("Enemy");
	//	instanceC.guardGate();

	std::cout << std::endl;

	std::cout << instanceS.getName() << std::endl;
	std::cout << "Hitpoints: " << instanceS.getHitpoints() << std::endl;
	std::cout << "Energy Points: " << instanceS.getEnergyPoints() << std::endl;
	std::cout << "Attack Damage: "<< instanceS.getAttackDamage() << std::endl;
	instanceS.attack("Enemy");
	instanceS.guardGate();

	std::cout << std::endl;
	
	std::cout << instanceF.getName() << std::endl;
	std::cout << "Hitpoints: " << instanceF.getHitpoints() << std::endl;
	std::cout << "Energy Points: " << instanceF.getEnergyPoints() << std::endl;
	std::cout << "Attack Damage: "<< instanceF.getAttackDamage() << std::endl;
	instanceF.attack("Enemy");
	std::cout << "After attack, remaining energy Points are: " << instanceF.getEnergyPoints() << std::endl;
	instanceF.highFivesGuys();
//	instanceS.guardGate();
	
	std::cout << std::endl;
	return (0);
}
