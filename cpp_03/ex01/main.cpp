/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebelo <arebelo@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 11:22:53 by arebelo           #+#    #+#             */
/*   Updated: 2022/07/06 14:23:08 by arebelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main( void )
{
	ClapTrap	instanceC("Clap");
	ScavTrap	instanceS("Scav");

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
	
	return (0);
}
