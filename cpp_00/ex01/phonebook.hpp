/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarebelo <anarebelo@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 21:15:25 by arebelo           #+#    #+#             */
/*   Updated: 2023/04/02 18:32:56 by anarebelo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __EX01_H__
# define __EX01_H__

# include <iostream>
# include <iomanip>
# include <stdlib.h>
# include "Contact.hpp"

# define	MAX_CONTACT 8
# define	COL_WIDTH 10

//Add
void		add_command ( Contact *phonebook );

//Search
void		search_command( Contact *phonebook );
void		display_individually( Contact instance );
int			display_in_list( Contact instance, int index );
std::string	print_format( std::string str );

#endif
