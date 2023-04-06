/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarebelo <anarebelo@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 16:52:03 by arebelo           #+#    #+#             */
/*   Updated: 2023/04/06 11:38:03 by anarebelo        ###   ########.fr       */
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
	void				printTrash( void );


private:
	Character( void );

	std::string			_name;
	int					_tCounter;
	static const int	_maxInv = 4;
	static const int	_maxTrash = 100;
	AMateria *			_inventory[_maxInv];
	AMateria *			_trash[_maxTrash];
};

#endif
