/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebelo <arebelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 13:50:20 by arebelo           #+#    #+#             */
/*   Updated: 2023/04/13 14:03:48 by arebelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WEAPON_HPP__
# define __WEAPON_HPP__

# include <iostream>

class	Weapon
{
public:
	Weapon( std::string type );
	~Weapon( void );

	const std::string	& getType( void ) const;
	void				setType( std::string str );

private:
	std::string	_type;
};

#endif
