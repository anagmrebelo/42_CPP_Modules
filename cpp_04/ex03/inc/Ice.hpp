/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebelo <arebelo@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 13:23:13 by arebelo           #+#    #+#             */
/*   Updated: 2022/07/11 18:11:57 by arebelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ICE_H__
# define __ICE_H__

# include "AMateria.hpp"
# include "ICharacter.hpp"
# include <iostream>

class	Ice : public AMateria
{
public:
	Ice( void );
	Ice( Ice const & src );
	~Ice( void );
	
	Ice &	operator=( Ice const & rhs );

	AMateria *	clone( void ) const;
	void		use( ICharacter & target );
};

#endif
