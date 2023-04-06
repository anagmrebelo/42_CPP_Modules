/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarebelo <anarebelo@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 19:10:43 by arebelo           #+#    #+#             */
/*   Updated: 2023/04/06 09:58:05 by anarebelo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WrongCat_HPP__
# define __WrongCat_HPP__

# include "../inc/WrongAnimal.hpp"

class	WrongCat : public WrongAnimal
{
public:
	WrongCat( void );
	WrongCat( WrongCat const & src );
	virtual ~WrongCat( void );

	WrongCat &	operator=( WrongCat const & rhs );

	void		makeSound( void ) const;
};

#endif
