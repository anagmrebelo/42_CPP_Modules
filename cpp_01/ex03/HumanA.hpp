/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebelo <arebelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 13:59:41 by arebelo           #+#    #+#             */
/*   Updated: 2023/04/05 19:33:09 by arebelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANA_HPP__
# define __HUMANA_HPP__

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
