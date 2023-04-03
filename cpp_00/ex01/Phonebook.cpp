/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebelo <arebelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 15:31:40 by arebelo           #+#    #+#             */
/*   Updated: 2023/04/03 17:03:38 by arebelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

// Non-static member and functions
//Constructor function
Phonebook::Phonebook( void )
{
	return ;
}

//Destructor function
Phonebook::~Phonebook( void )
{
	return ;
}

static std::string ask_input( std::string inp_text )
{
    std::string	command;
    command = "";
    while (command == "")
    {
        std::cout << "Input " << inp_text << ": ";
        if (std::getline (std::cin, command).rdstate() != 0)
            exit(1);
    }
    return (command);
}

//Other functions
void	Phonebook::add_command( void )
{
	std::string	command;
	Contact		*p;

	if (Contact::getNb() == MAX_CONTACT)
		Contact::setNb(0);
	p = &this->_phonebook[Contact::getNb()];	
	p->setFirstName(ask_input("First Name"));
    p->setLastName(ask_input("Last Name"));
	p->setNickname(ask_input("Nickname"));
    p->setPhonenumber(ask_input("Phone Number"));
	p->setDarkestSecret(ask_input("Darkest Secret"));
	Contact::setNb(Contact::getNb() + 1);
	return ;
}


static std::string	print_format( std::string str )
{
	if (str.length() > COL_WIDTH)
	{
		str.erase(COL_WIDTH - 1, std::string::npos);
		str.push_back('.');
		return (str);
	}
	return (str);
}

static int	display_in_list( Contact instance, int index )
{
	std::cout << std::setw(COL_WIDTH) << index; 
	std::cout << "|" ;
	std::cout << std::setw(COL_WIDTH) << print_format(instance.getFirstName());
	std::cout << "|" ;
	std::cout << std::setw(COL_WIDTH) << print_format(instance.getLastName());
	std::cout << "|" ;
	std::cout << std::setw(COL_WIDTH) << print_format(instance.getNickname()) << std::endl;
	return (1);
}

static void	display_individually( Contact instance )
{
	std::cout << "First Name: " << instance.getFirstName() << std::endl;
	std::cout << "Last Name: " << instance.getLastName() << std::endl;
	std::cout << "Nickname: " << instance.getNickname() << std::endl;
	std::cout << "Phonenumber: " << instance.getPhonenumber() << std::endl;
	std::cout << "Darkest Secret: " << instance.getDarkestSecret() << std::endl;
	return ;
}

void	Phonebook::search_command ( void )
{
	int	i;
	int index;
	std::string command;

	i = -1;
	index = 1;
	if (this->_phonebook[0].getFirstName() == "")
	{
		std::cout << "Empty Phonebook" << std::endl;
		return ;
	}
	std::cout << std::setw(COL_WIDTH) << "Index" << "|" << std::setw(COL_WIDTH) << "First Name" << "|" << std::setw(COL_WIDTH) << "Last Name" << "|" << std::setw(COL_WIDTH) << "Nickname" << std::endl;
	while (++i < 8 )
		if (this->_phonebook[i].getFirstName() != "")
			index += display_in_list(this->_phonebook[i], index);
	while (1)
	{
		std::cout << "Input index for further detail: ";
        if (std::getline (std::cin, command).rdstate() != 0)
            exit(1);
        if (command.length() < std::to_string(MAX_CONTACT).length() && isdigit(command[0]) && stoi(command) > 0 && stoi(command) < index)
            break;
        else
			std::cerr << "Please input valid index" << std::endl;
	}	
	display_individually(this->_phonebook[stoi(command) - 1]);
}