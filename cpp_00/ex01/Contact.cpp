/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebelo <arebelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 21:14:43 by arebelo           #+#    #+#             */
/*   Updated: 2023/04/03 15:52:58 by arebelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Contact.hpp"

// Static member and functions

int	Contact::_nbContact = 0;
	
int	Contact::getNb( void )
{
	return (Contact::_nbContact);
}

void	Contact::setNb( int i )
{
	Contact::_nbContact = i;
	return ;
}

// Non-static member and functions
//Constructor function
Contact::Contact( void )
{
	return ;
}

//Destructor function
Contact::~Contact( void )
{
	return ;
}

//Setter functions
void    Contact::setFirstName( std::string str )
{
	this->_firstName = str;
	return ;
}

void	Contact::setLastName( std::string str )
{
	this->_lastName = str;
	return ;
}

void	Contact::setNickname( std::string str )
{
	this->_nickname = str;
	return ;
}

void	Contact::setPhonenumber( std::string str )
{
	this->_phonenumber = str;
	return ;
}

void	Contact::setDarkestSecret( std::string str )
{
	this->_darkestSecret = str;
	return ;
}

//Getter functions
std::string	Contact::getFirstName( void ) const
{
	return this->_firstName;
}

std::string	Contact::getLastName( void ) const
{
	return this->_lastName;
}

std::string	Contact::getNickname( void ) const
{
	return this->_nickname;
}

std::string	Contact::getPhonenumber( void ) const
{
	return this->_phonenumber;
}

std::string	Contact::getDarkestSecret( void ) const
{
	return this->_darkestSecret;
}
