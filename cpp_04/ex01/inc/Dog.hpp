/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebelo <arebelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 18:34:07 by arebelo           #+#    #+#             */
/*   Updated: 2023/05/02 11:19:31 by arebelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DOG_HPP__
# define __DOG_HPP__

# include "../inc/Animal.hpp"
# include "Brain.hpp"

class	Dog : public Animal
{
public:
	Dog( void );
	Dog( Dog const & src );
	~Dog( void );

	Dog &			operator=( Dog const & rhs );

	Brain &			getBrain( void ) const;
	virtual void	makeSound( void ) const;
private:
	Brain *			_brain;
};

#endif
