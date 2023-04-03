/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebelo <arebelo@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 02:30:33 by arebelo           #+#    #+#             */
/*   Updated: 2022/06/29 19:36:15 by arebelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl( void )
{
	return ;
}

Harl::~Harl( void )
{
	return ;
}

void	Harl::debug( void )
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
	return ;
}

void	Harl::info( void )
{
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
	return ;
}

void	Harl::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
	return ;
}

void	Harl::error( void )
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
	return ;
}

typedef void (Harl::*FnPtr)( void );

void	Harl::complain( std::string level)
{
	int		i;
	
	void	(Harl::*functions[])( void ) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};
	std::string options[] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
	i = -1;
	while (++i < 4)
		if (!options[i].compare(level))
		{
			(this->*functions[i])();
			break;
		}
	return ;
}
