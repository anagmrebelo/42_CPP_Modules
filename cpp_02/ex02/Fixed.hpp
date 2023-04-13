/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebelo <arebelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 13:46:24 by arebelo           #+#    #+#             */
/*   Updated: 2023/04/13 13:46:35 by arebelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_HPP__
# define __FIXED_HPP__

# include <iostream>
# include <math.h>

class	Fixed
{
public:
	Fixed( void );
	Fixed( Fixed const & src);
	Fixed( int const src );
	Fixed( float const src );
	~Fixed( void );

	Fixed &	operator=( Fixed const & rhs );
	Fixed	operator+( Fixed const & rhs );
	Fixed	operator-( Fixed const & rhs );
	Fixed	operator*( Fixed const & rhs );
	Fixed	operator/( Fixed const & rhs );
	Fixed	operator++( void );
	Fixed	operator++( int );
	Fixed	operator--( void );
	Fixed	operator--( int );

	bool	operator>( Fixed const & rhs ) const;
	bool	operator<( Fixed const & rhs ) const;
	bool	operator>=( Fixed const & rhs ) const;
	bool	operator<=( Fixed const & rhs ) const;
	bool	operator==( Fixed const & rhs ) const;
	bool	operator!=( Fixed const & rhs ) const;

	static Fixed const &	max( Fixed const & lhs, Fixed const & rhs );
	static Fixed const &	min( Fixed const & lhs, Fixed const & rhs );
	
	int	    getRawBits( void ) const;
	void	setRawBits( int const raw);

	float	toFloat( void ) const;
	int	    toInt( void ) const;

private:
	int			_rawBits;
	static const int	_frBits;
};

std::ostream &	operator<<( std::ostream & o, Fixed const & rhs );
std::ostream &	max( std ::ostream & o, Fixed const & lhs, Fixed const & rhs );
std::ostream &	min( std ::ostream & o, Fixed const & lhs, Fixed const & rhs );

#endif
