/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebelo <arebelo@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 17:27:45 by arebelo           #+#    #+#             */
/*   Updated: 2022/06/27 18:12:50 by arebelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_H__
# define __ZOMBIE_H__

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
