/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarebelo <anarebelo@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 18:34:07 by arebelo           #+#    #+#             */
/*   Updated: 2023/04/06 10:59:29 by anarebelo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DOG_HPP__
# define __DOG_HPP__

# include "../inc/AAnimal.hpp"

class	Dog : public AAnimal
{
public:
	Dog( void );
	Dog( Dog const & src );
	~Dog( void );

	Dog &			operator=( Dog const & rhs );

	virtual void	makeSound( void ) const;
};

#endif
