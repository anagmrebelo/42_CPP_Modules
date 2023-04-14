/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebelo <arebelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 16:45:04 by arebelo           #+#    #+#             */
/*   Updated: 2023/04/14 14:08:39 by arebelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ICHARACTER_HPP__
# define __ICHARACTER_HPP__

# include "AMateria.hpp"
# include <iostream>

class 	AMateria;

class	ICharacter
{
public:
	virtual						~ICharacter( void ) {}
	virtual std::string const &	getName( void ) const = 0;
	virtual void				equip( AMateria * m ) = 0;
	virtual void				unequip( int idx ) = 0;
	virtual void				use( int idx, ICharacter & target) = 0;
	virtual void				printMaterias( void ) = 0;
};

#endif
