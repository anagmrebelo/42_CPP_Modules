/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebelo <arebelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 15:02:26 by arebelo           #+#    #+#             */
/*   Updated: 2023/04/13 16:04:34 by arebelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DIAMONDTRAP_HPP__
# define __DIAMONDTRAP_HPP__

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class	DiamondTrap: public ScavTrap, public FragTrap
{
public:
	DiamondTrap( std::string name );
	DiamondTrap( DiamondTrap const & src );
	~DiamondTrap( void );

	DiamondTrap 	&operator= (const DiamondTrap &rhs);

	void	whoAmI( void );
	void	attack( std::string const & target );

private:
	DiamondTrap( void );
	std::string	_name;
};

#endif
