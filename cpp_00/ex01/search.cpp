/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarebelo <anarebelo@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 21:15:41 by arebelo           #+#    #+#             */
/*   Updated: 2023/04/02 18:35:06 by anarebelo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

std::string	print_format( std::string str )
{
	if (str.length() > COL_WIDTH)
	{
		str.erase(COL_WIDTH - 1, std::string::npos);
		str.push_back('.');
		return (str);
	}
	return (str);
}

int	display_in_list( Contact instance, int index )
{
	std::cout << std::setw(COL_WIDTH) << index; 
	std::cout << "|" ;
	std::cout << std::setw(COL_WIDTH) << print_format(instance.getFirstName());
	std::cout << "|" ;
	std::cout << std::setw(COL_WIDTH) << instance.getLastName();
	std::cout << "|" ;
	std::cout << std::setw(COL_WIDTH) << instance.getNickname() << std::endl;
	return (1);
}

void	display_individually( Contact instance )
{
	std::cout << "First Name: " << instance.getFirstName() << std::endl;
	std::cout << "Last Name: " << instance.getLastName() << std::endl;
	std::cout << "Nickname: " << instance.getNickname() << std::endl;
	std::cout << "Phonenumber: " << instance.getPhonenumber() << std::endl;
	std::cout << "Darkest Secret: " << instance.getDarkestSecret() << std::endl;
	return ;
}

void	search_command ( Contact *phonebook )
{
	int			i;
	int			index;
	int			command;

	i = -1;
	index = 1;
	if (phonebook[0].getFirstName() == "")
	{
		std::cout << "Empty phonebook" << std::endl;
		return ;
	}
	std::cout << std::setw(COL_WIDTH) << "Index" << "|" << std::setw(COL_WIDTH) << "First Name" << "|" << std::setw(COL_WIDTH) << "Last Name" << "|" << std::setw(COL_WIDTH) << "Nickname" << std::endl;
	while (++i < 8 )
		if (phonebook[i].getFirstName() != "")
			index += display_in_list(phonebook[i], index);
	while (1)
	{
		std::cout << "Input index for further detail: ";
		std::cin >> command;
		if ((command < 1 || command >= index))
			std::cerr << "Please input valid index" << std::endl;
		else
			break;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	display_individually(phonebook[command - 1]);
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}
