/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarebelo <anarebelo@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 13:59:41 by arebelo           #+#    #+#             */
/*   Updated: 2023/04/02 22:59:29 by anarebelo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANA_H__
# define __HUMANA_H__

# include "Weapon.hpp"

class	HumanA
{
public:
	HumanA( std::string name, Weapon &input );
	~HumanA( void );

	void	attack( void ) const;

private:
	std::string	_name;
	Weapon &	_weaponRef;
};

#endif
