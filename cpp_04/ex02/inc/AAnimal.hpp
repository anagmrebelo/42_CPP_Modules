/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarebelo <anarebelo@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 17:57:59 by arebelo           #+#    #+#             */
/*   Updated: 2023/04/06 10:53:46 by anarebelo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __AANIMAL_HPP__
# define __AANIMAL_HPP__

# include <iostream>
# include "Brain.hpp"

class	AAnimal
{
public:
	AAnimal( void );
	AAnimal( std::string type );
	AAnimal( AAnimal const & src );
	virtual ~AAnimal( void );

	AAnimal &		operator=( AAnimal const & rhs );

	std::string		getType( void ) const;
	Brain &			getBrain( void ) const;
	virtual void	makeSound( void ) const = 0;

protected:
	std::string		_type;
	Brain *			_brain;
};

#endif
