/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarebelo <anarebelo@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 21:15:35 by arebelo           #+#    #+#             */
/*   Updated: 2023/04/02 18:35:57 by anarebelo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int	eval_command( std::string command )
{
	if (command.compare("ADD") == 0)
		return (1);
	else if (command.compare("SEARCH") == 0)
		return (2);
	else if (command.compare("EXIT") == 0)
		return (3);
	else
		std::cerr << "Insert valid input: ADD, SEARCH or EXIT" << std::endl;
	return (0);
}

int	main ( void )
{
	std::string	command;
	int			res;
	Contact		phonebook[8];

	while (1)
	{
		std::cout << "Input a command: ";
		std::getline(std::cin, command);
		res = eval_command(command);
		if (res == 3)	// EXIT
			break;
		else if (res == 1)	// ADD
			add_command(phonebook);
		else if (res == 2)	// SEARCH
				search_command(phonebook);
	}
	return (0);
}
