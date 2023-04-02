/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarebelo <anarebelo@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 13:50:20 by arebelo           #+#    #+#             */
/*   Updated: 2023/04/02 22:57:50 by anarebelo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WEAPON_H__
# define __WEAPON_H__

# include <iostream>

class	Weapon
{
public:
	Weapon( std::string type );
	~Weapon( void );

	std::string	getType( void ) const;
	void		setType( std::string str );

private:
	std::string	_type;
};

#endif
