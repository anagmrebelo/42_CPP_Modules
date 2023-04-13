/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebelo <arebelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 13:48:04 by arebelo           #+#    #+#             */
/*   Updated: 2023/04/13 13:48:20 by arebelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

//Constructors
Point::Point( void ) : _x( 0 ) , _y( 0 )
{
	return ;
}

Point::Point( Point const & src ) : _x( src.getX() ), _y( src.getY() )
{ 
	return ;
}

Point::Point( float const x, float const y ) : _x( Fixed( x ) ) , _y( Fixed( y ) )
{
	return ;
}

Point::Point( Fixed const x, Fixed const y ) : _x( x ) , _y( y )
{
	return ;
}

//Destructor
Point::~Point( void )
{
	return ;
}

//Assignation overload

Point & Point::operator=( Point const & rhs )
{
	(void) rhs;
	std::cout << "You cannot assign new values to const variables" << std::endl;
	return (*this);
}

//Getters
Fixed const	Point::getX( void ) const
{
	return (this->_x);
}

Fixed const	Point::getY( void ) const
{
	return (this->_y);
}
