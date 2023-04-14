/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebelo <arebelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 13:23:13 by arebelo           #+#    #+#             */
/*   Updated: 2023/04/14 14:08:15 by arebelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CURE_HPP__
# define __CURE_HPP__

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

class AMateria;

class	Cure : public AMateria
{
public:
	Cure( void );
	Cure( Cure const & src );
	~Cure( void );
	
	Cure &		operator=( Cure const & rhs );

	AMateria *	clone( void ) const;
	void		use( ICharacter & target );
};

#endif
