/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebelo <arebelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 17:37:21 by arebelo           #+#    #+#             */
/*   Updated: 2023/04/14 14:08:00 by arebelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __AMATERIA_HPP__
# define __AMATERIA_HPP__

# include "ICharacter.hpp"
# include <iostream>

class ICharacter;

class AMateria
{
public:
	AMateria( void );
	AMateria( std::string const & type );
	AMateria( AMateria const & src );
	virtual ~AMateria( void );

	AMateria &	operator=( AMateria const & rhs );

	std::string const &	getType( void ) const;

	virtual	AMateria*	clone( void ) const = 0;
	virtual void		use( ICharacter & target ) = 0;

protected:
	std::string	_type;
};

#endif
