/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebelo <arebelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 14:32:21 by arebelo           #+#    #+#             */
/*   Updated: 2023/04/06 17:31:28 by arebelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FRAGTRAP_H__
# define __FRAGTRAP_H__

# include "ClapTrap.hpp"

class	FragTrap : virtual public  ClapTrap
{
public:
	FragTrap( std::string name );
	FragTrap( FragTrap const & src );
	~FragTrap( void );

	FragTrap & operator=( FragTrap const & rhs );
	
	void	attack( std::string const & target );
	void	highFivesGuys( void );

protected:
	FragTrap( void );
};

#endif
