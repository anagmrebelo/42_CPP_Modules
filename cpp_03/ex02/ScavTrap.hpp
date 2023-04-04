/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebelo <arebelo@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 13:08:14 by arebelo           #+#    #+#             */
/*   Updated: 2022/07/06 13:57:10 by arebelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SCAVTRAP_H__
# define __SCAVTRAP_H__

# include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap
{
public:
	ScavTrap( std::string name );
	ScavTrap( ScavTrap const & src );
	~ScavTrap( void );

	ScavTrap & operator=( ScavTrap const & rhs );
	
	void	attack( std::string const & target );
	void	guardGate( void );

private:
	ScavTrap( void );
};

#endif
