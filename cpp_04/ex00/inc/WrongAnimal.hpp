/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarebelo <anarebelo@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 17:57:59 by arebelo           #+#    #+#             */
/*   Updated: 2023/04/06 09:42:33 by anarebelo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WrongAnimal_HPP__
# define __WrongAnimal_HPP__

#include <iostream>

class	WrongAnimal
{
public:
	WrongAnimal( void );
	WrongAnimal( std::string type );
	WrongAnimal( WrongAnimal const & src );
	virtual ~WrongAnimal( void );

	WrongAnimal &	operator=( WrongAnimal const & rhs );

	std::string		getType( void ) const;
	void			makeSound( void ) const;

protected:
	std::string	_type;
};

#endif
