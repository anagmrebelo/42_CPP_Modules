/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebelo <arebelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 13:48:07 by arebelo           #+#    #+#             */
/*   Updated: 2023/04/13 13:48:13 by arebelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __POINT_HPP__
# define __POINT_HPP__

# include "Fixed.hpp"
# include <iostream>

class Point
{
public:
	Point( void );				//Default Constructor
	Point( Point const & src );	//Copy constructor
	Point( float const x, float const y );
	Point( Fixed const x, Fixed const y );
	~Point( void );				//Destructor

	Point &	operator=( Point const & rhs );

	Fixed const	getX( void ) const;
	Fixed const	getY( void ) const;

private:
	Fixed const	_x;
	Fixed const	_y;
};

#endif
