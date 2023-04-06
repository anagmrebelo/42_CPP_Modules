/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebelo <arebelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 17:27:45 by arebelo           #+#    #+#             */
/*   Updated: 2023/04/05 19:29:36 by arebelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_HPP__
# define __ZOMBIE_HPP__

#include <iostream>

class	Zombie
{
public:
	Zombie( std::string name );
	~Zombie( void );

	std::string	getName( void ) const;
	void		announce( void ) const;

private:
	std::string	_name;
};

Zombie*	newZombie( std::string name);
void	randomChump( std::string name);

#endif
