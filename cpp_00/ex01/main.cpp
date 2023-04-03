/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebelo <arebelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 21:15:35 by arebelo           #+#    #+#             */
/*   Updated: 2023/04/03 16:11:23 by arebelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

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

int	main ( int argc, char **argv )
{
	std::string	command;
	int			res;
    Phonebook   obj;
	
    (void) argv;
    if (argc != 1)
        return (1);
    while (1)
	{
		std::cout << "Input a command: ";
		if (std::getline(std::cin, command).rdstate() != 0)
            return (1);
		res = eval_command(command);
		if (res == 3)	// EXIT
			break;
		else if (res == 1)	// ADD
			obj.add_command();
		else if (res == 2)	// SEARCH
			obj.search_command();
	}
	return (0);
}
