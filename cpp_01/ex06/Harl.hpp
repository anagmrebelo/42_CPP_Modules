/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarebelo <anarebelo@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 02:27:54 by arebelo           #+#    #+#             */
/*   Updated: 2023/04/03 12:12:04 by anarebelo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HARL_H__
# define __HARL_H__

# include <iostream>

class	Harl
{
public:
	Harl( void );
	~Harl( void );

	void	complain( std::string level);

private:
	void	debug( void );
	void	info( void );
	void	warning( void );
	void	error( void );
};

#endif
