/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebelo <arebelo@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 16:45:04 by arebelo           #+#    #+#             */
/*   Updated: 2022/07/11 18:30:32 by arebelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ICHARACTER_H__
# define __ICHARACTER_H__

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
	virtual void				printTrash( void ) = 0;
};

#endif
