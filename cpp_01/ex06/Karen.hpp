/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebelo <arebelo@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 02:27:54 by arebelo           #+#    #+#             */
/*   Updated: 2022/06/29 16:52:19 by arebelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __KAREN_H__
# define __KAREN_H__

# include <iostream>

class	Karen
{
public:
	Karen( void );
	~Karen( void );

	void	complain( std::string level);

private:
	void	debug( void );
	void	info( void );
	void	warning( void );
	void	error( void );
};

#endif
