/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebelo <arebelo@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 11:22:53 by arebelo           #+#    #+#             */
/*   Updated: 2022/07/06 14:41:52 by arebelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main( void )
{
	DiamondTrap	instanceD("Diamond");
	/*ClapTrap	instanceC("Clap");
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
	instanceF.highFivesGuys();
//	instanceS.guardGate();*/
	
	std::cout << std::endl;

	std::cout << instanceD.getName() << std::endl;
	std::cout << "Hitpoints: " << instanceD.getHitpoints() << std::endl;
	std::cout << "Energy Points: " << instanceD.getEnergyPoints() << std::endl;
	std::cout << "Attack Damage: "<< instanceD.getAttackDamage() << std::endl;
	instanceD.attack("Enemy");
	instanceD.highFivesGuys();
	instanceD.whoAmI();
//	instanceS.guardGate();
	
	std::cout << std::endl;
	return (0);
}
