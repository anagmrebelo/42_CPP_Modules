/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebelo <arebelo@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 14:32:21 by arebelo           #+#    #+#             */
/*   Updated: 2022/07/06 14:34:24 by arebelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FRAGTRAP_H__
# define __FRAGTRAP_H__

# include "ClapTrap.hpp"

class	FragTrap : public ClapTrap
{
public:
	FragTrap( std::string name );
	FragTrap( FragTrap const & src );
	~FragTrap( void );

	FragTrap & operator=( FragTrap const & rhs );
	
	void	attack( std::string const & target );
	void	highFivesGuys( void );

private:
	FragTrap( void );
};

#endif
