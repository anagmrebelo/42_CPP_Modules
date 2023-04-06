/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebelo <arebelo@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 12:44:44 by arebelo           #+#    #+#             */
/*   Updated: 2022/07/11 18:30:20 by arebelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MATERIASOURCE_H__
# define __MATERIASOURCE_H__

# include "AMateria.hpp"
# include "IMateriaSource.hpp"
# include <iostream>

class	MateriaSource : public IMateriaSource
{
public:
	MateriaSource( void );
	virtual 	~MateriaSource( void );
	void		learnMateria( AMateria * src );
	AMateria *	createMateria( std::string const & type );
	void		printMaterias( void );

private:
	int					_counter;
	static const int	_maxInv = 4;
	AMateria *			_inventory[_maxInv];
};

#endif
