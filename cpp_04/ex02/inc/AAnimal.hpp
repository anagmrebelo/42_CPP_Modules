/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebelo <arebelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 17:57:59 by arebelo           #+#    #+#             */
/*   Updated: 2023/05/02 11:13:36 by arebelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __AANIMAL_HPP__
# define __AANIMAL_HPP__

# include <iostream>

class	AAnimal
{
public:
	AAnimal( void );
	AAnimal( std::string type );
	AAnimal( AAnimal const & src );
	virtual ~AAnimal( void );

	AAnimal &		operator=( AAnimal const & rhs );

	std::string		getType( void ) const;
	virtual void	makeSound( void ) const = 0;

protected:
	std::string		_type;
};

#endif
