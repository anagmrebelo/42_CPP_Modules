/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebelo <arebelo@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 12:15:14 by arebelo           #+#    #+#             */
/*   Updated: 2022/07/08 14:45:39 by arebelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BRAIN_H__
# define __BRAIN_H__

# include <iostream>

class	Brain
{
public:
	Brain( void );
	Brain( Brain const & src );
	~Brain( void );

	Brain &	operator=( Brain const & rhs );

	std::string	getIdeas( int i ) const;
	void		setIdeas( int i, std::string idea );

protected:
	std::string	_ideas[100];
};

#endif
