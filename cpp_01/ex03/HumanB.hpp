/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebelo <arebelo@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 14:27:39 by arebelo           #+#    #+#             */
/*   Updated: 2022/06/28 16:33:34 by arebelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANB_H__
# define __HUMANB_H__

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
