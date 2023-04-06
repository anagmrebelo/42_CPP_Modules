/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebelo <arebelo@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 17:37:21 by arebelo           #+#    #+#             */
/*   Updated: 2022/07/11 18:30:10 by arebelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __AMATERIA_H__
# define __AMATERIA_H__

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
