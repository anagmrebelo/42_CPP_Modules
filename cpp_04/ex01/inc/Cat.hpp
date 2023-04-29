/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarebelo <anarebelo@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 19:10:43 by arebelo           #+#    #+#             */
/*   Updated: 2023/04/29 22:40:49 by anarebelo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT_HPP__
# define __CAT_HPP__

# include "../inc/Animal.hpp"

class	Cat : public Animal
{
public:
	Cat( void );
	Cat( Cat const & src );
	~Cat( void );

	Cat &			operator=( Cat const & rhs );
	
	Brain &			getBrain( void ) const;
	virtual void	makeSound( void ) const;
private:
	Brain *		_brain;
};

#endif
