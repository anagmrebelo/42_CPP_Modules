/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebelo <arebelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 17:57:59 by arebelo           #+#    #+#             */
/*   Updated: 2023/05/02 11:19:25 by arebelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ANIMAL_HPP__
# define __ANIMAL_HPP__

# include <iostream>

class	Animal
{
public:
	Animal( void );
	Animal( std::string type );
	Animal( Animal const & src );
	virtual ~Animal( void );

	Animal &	operator=( Animal const & rhs );

	std::string		getType( void ) const;
	virtual void	makeSound( void ) const;

protected:
	std::string	_type;
};

#endif
