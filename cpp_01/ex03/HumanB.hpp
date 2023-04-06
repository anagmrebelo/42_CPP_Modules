/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebelo <arebelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 14:27:39 by arebelo           #+#    #+#             */
/*   Updated: 2023/04/05 19:33:47 by arebelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANB_HPP__
# define __HUMANB_HPP__

# include "Weapon.hpp"

class	HumanB
{
public:
	HumanB( std::string name );
	~HumanB( void );

	void	setWeapon( Weapon & weapon );
	void	attack( void ) const;

private:
	std::string	_name;
	Weapon *	_weaponPtr;
};

#endif
