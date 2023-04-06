/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebelo <arebelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 10:15:12 by arebelo           #+#    #+#             */
/*   Updated: 2023/04/06 17:28:37 by arebelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CLAPTRAP_HPP__
# define __CLAPTRAP_HPP__

# include <iostream>

class	ClapTrap
{
public:
	ClapTrap( std::string name );
	ClapTrap( ClapTrap const & src );	// Copy constructor
	~ClapTrap( void );
	
	ClapTrap &	operator=( ClapTrap const & rhs );	//Assigment overload

	std::string	getName( void ) const;
	int			getHitpoints( void ) const;
	int			getEnergyPoints( void ) const;
	int			getAttackDamage( void ) const;

	void		attack( std::string const & target );
	void		takeDamage( unsigned int amount );
	void		beRepaired( unsigned int amount );

protected:
	std::string		_name;
	unsigned int	_hitPoints;
	unsigned int	_energyPoints;
	unsigned int	_attackDamage;
	
	ClapTrap( void );					//Default constructor
};

#endif
