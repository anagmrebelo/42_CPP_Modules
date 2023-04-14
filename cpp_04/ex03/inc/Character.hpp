/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebelo <arebelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 16:52:03 by arebelo           #+#    #+#             */
/*   Updated: 2023/04/14 14:10:29 by arebelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CHARACTER_HPP__
# define __CHARACTER_HPP__

# include "AMateria.hpp"
# include "ICharacter.hpp"
# include <iostream>

class	Character : public ICharacter
{
public:
	Character( std::string name );
	Character( Character const & src );
	~Character( void );

	Character &	operator=( Character const & rhs );

	std::string const &	getName( void ) const;
	void				equip( AMateria * m );
	void				unequip( int idx );
	virtual void		use( int idx, ICharacter & target );
	void				printMaterias( void );


private:
	Character( void );

	std::string			_name;
	static const int	_maxInv = 4;
	AMateria *			_inventory[_maxInv];
};

#endif
