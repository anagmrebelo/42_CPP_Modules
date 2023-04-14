/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebelo <arebelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 13:23:13 by arebelo           #+#    #+#             */
/*   Updated: 2023/04/14 14:08:26 by arebelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ICE_HPP__
# define __ICE_HPP__

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
