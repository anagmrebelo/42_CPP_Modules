/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebelo <arebelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 12:07:15 by arebelo           #+#    #+#             */
/*   Updated: 2023/04/13 13:45:21 by arebelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_HPP__
# define __FIXED_HPP__

# include <iostream>

class	Fixed
{
public:
	Fixed( void );
	Fixed( Fixed const & src);
	~Fixed( void );
	Fixed & operator=( Fixed const & rhs );
	
	int		getRawBits( void ) const;
	void	setRawBits( int const raw);

private:
	int					_rawBits;
	static const int	_frBits;
};

#endif
