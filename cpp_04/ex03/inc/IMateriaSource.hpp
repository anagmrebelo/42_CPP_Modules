/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebelo <arebelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 13:09:08 by arebelo           #+#    #+#             */
/*   Updated: 2023/04/14 14:08:56 by arebelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __IMATERIASOURCE_HPP__
# define __IMATERIASOURCE_HPP__

# include "AMateria.hpp"
# include <iostream>

class	IMateriaSource
{
public:
	virtual				~IMateriaSource(){}
	virtual void		learnMateria( AMateria* src ) = 0;
	virtual AMateria*	createMateria( std::string const & type ) = 0;
	virtual void		printMaterias( void ) = 0;
};

#endif
