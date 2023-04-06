/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebelo <arebelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 21:14:53 by arebelo           #+#    #+#             */
/*   Updated: 2023/04/05 14:36:32 by arebelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef __CONTACT_CLASS_HPP__
# define __CONTACT_CLASS_HPP__

# include <iostream>

class	Contact
{
public:
	Contact ( void );
	~Contact ( void );

	void			setFirstName (std::string str);
	void			setLastName (std::string str);
	void			setNickname (std::string str);
	void			setPhonenumber (std::string str);
	void			setDarkestSecret (std::string str);
	static void		setNb ( int i ) ;

	static int	getNb ( void ) ;
	int			getIndex ( void ) const;
	std::string	getFirstName ( void ) const;
	std::string	getLastName ( void ) const;
	std::string	getNickname ( void ) const;
	std::string	getPhonenumber ( void ) const;
	std::string	getDarkestSecret ( void ) const;

private:
	std::string		_firstName;	
	std::string		_lastName;	
	std::string 	_nickname;	
	std::string		_phonenumber;	
	std::string		_darkestSecret;
	static int		_nbContact;		
};

#endif
