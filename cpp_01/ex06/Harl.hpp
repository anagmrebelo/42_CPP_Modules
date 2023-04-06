/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebelo <arebelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 02:27:54 by arebelo           #+#    #+#             */
/*   Updated: 2023/04/05 16:46:31 by arebelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HARL_HPP__
# define __HARL_HPP__

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
