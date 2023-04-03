/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebelo <arebelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 21:15:25 by arebelo           #+#    #+#             */
/*   Updated: 2023/04/03 17:04:09 by arebelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PHONEBOOK_H__
# define __Phonebook_H__

# include <iostream>
# include <iomanip>
# include <stdlib.h>
# include "Contact.hpp"

# define MAX_CONTACT 8
# define COL_WIDTH 10

class Phonebook
{
public:
	Phonebook ( void );
	~Phonebook ( void );

    void	    add_command( void );
    void        search_command( void );

private:
    Contact		_phonebook[MAX_CONTACT];
};

#endif
