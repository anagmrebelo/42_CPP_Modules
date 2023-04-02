/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarebelo <anarebelo@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 21:15:08 by arebelo           #+#    #+#             */
/*   Updated: 2023/04/02 18:36:33 by anarebelo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	add_command( Contact *phonebook)
{
	std::string	command;
	Contact		*p;

	if (Contact::getNb() == MAX_CONTACT)
		Contact::setNb(0);
	p = &phonebook[Contact::getNb()];
	std::cout << "Input First Name: ";	
	std::getline (std::cin, command);
	p->setFirstName(command);	
	std::cout << "Input Last Name: ";	
	std::getline (std::cin, command);
	p->setLastName(command);
	std::cout << "Input Nickname: ";	
	std::getline (std::cin, command);
	p->setNickname(command);
	std::cout << "Input Phone number: ";	
	std::getline (std::cin, command);
	p->setPhonenumber(command);
	std::cout << "Input Darkest Secret: ";	
	std::getline (std::cin, command);
	p->setDarkestSecret(command);
	Contact::setNb(Contact::getNb() + 1);
	return ;
}
