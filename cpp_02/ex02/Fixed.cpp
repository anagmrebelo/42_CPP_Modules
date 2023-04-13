/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebelo <arebelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 13:46:11 by arebelo           #+#    #+#             */
/*   Updated: 2023/04/13 13:46:14 by arebelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//Static member and functions
const int	Fixed::_frBits = 8;

Fixed const &	Fixed::max( Fixed const & lhs, Fixed const & rhs )
{
	if ( lhs > rhs )
		return (lhs);
	return (rhs);
}

Fixed const &	Fixed::min( Fixed const & lhs, Fixed const & rhs )
{
	if ( lhs > rhs )
		return (rhs);
	return (lhs);
}

//Default constructor
Fixed::Fixed( void ) : _rawBits( 0 )
{
	// std::cout << "Default constructor called" << std::endl;
	return ;
}

//Copy constructor
Fixed::Fixed( Fixed const & src )
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Fixed::Fixed( int const src )
{
	// std::cout << "Int constructor called" << std::endl;
	this->_rawBits = (src << Fixed::_frBits);
	return ;
}

Fixed::Fixed( float const src )
{
	// std::cout << "Float constructor called" << std::endl;
	this->_rawBits = int(roundf(src * (1 << this->_frBits)));
	return ;
}

//Destructor
Fixed::~Fixed( void )
{
	// std::cout << "Destructor called" << std::endl;
	return ;
}

//Assignation overload
Fixed &	Fixed::operator=( Fixed const & rhs )
{
	// std::cout << "Assignation operator called" << std::endl;
	this->_rawBits = rhs.getRawBits();
	return *this;
}

//Arithmetic Operation overload
Fixed	Fixed::operator+( Fixed const & rhs )
{	
	Fixed	tmp;

	tmp.setRawBits(this->_rawBits + rhs.getRawBits());
	return	(tmp);
}

Fixed	Fixed::operator-( Fixed const & rhs )
{
	Fixed	tmp;

	tmp.setRawBits(this->_rawBits - rhs.getRawBits());
	return (tmp);
}

Fixed	Fixed::operator*( Fixed const & rhs )
{
	Fixed	tmp(this->toFloat() * rhs.toFloat());
	return (tmp);
}

Fixed	Fixed::operator/( Fixed const & rhs )
{
	Fixed	tmp(this->toFloat() / rhs.toFloat());
	return (tmp);
}

Fixed	Fixed::operator++ ( void )
{
	this->_rawBits++;
	return (*this);
}

Fixed	Fixed::operator-- ( void )
{
	this->_rawBits--;
	return (*this);
}

Fixed	Fixed::operator++ ( int )	// Post increment
{
	Fixed	tmp(*this);
	
	operator++();
	return (tmp);
}

Fixed	Fixed::operator-- ( int )	//Post increment
{
	Fixed	tmp(*this);
	
	operator--();
	return (tmp);
}

//Comparison operator overload
bool	Fixed::operator<( Fixed const & rhs ) const
{
	if (this->_rawBits < rhs.getRawBits())
		return (1);
	return (0);
}

bool	Fixed::operator<=( Fixed const & rhs ) const
{
	if (this->_rawBits <= rhs.getRawBits())
		return (1);
	return (0);
}

bool	Fixed::operator>( Fixed const & rhs ) const
{
	return (this->_rawBits > rhs.getRawBits());
}

bool	Fixed::operator>=( Fixed const & rhs ) const
{
	return (this->_rawBits >= rhs.getRawBits());
}

bool	Fixed::operator==( Fixed const & rhs ) const
{
	return (this->_rawBits == rhs.getRawBits());
}

bool	Fixed::operator!=( Fixed const & rhs ) const
{
	return (this->_rawBits != rhs.getRawBits());
}

//Getters
int	Fixed::getRawBits( void ) const
{
//	std::cout << "getRawBits member function called" << std::endl;
	return this->_rawBits;
}

//Setters
void	Fixed::setRawBits(int const raw)
{
//	std::cout << "setRawBits member function called" << std::endl;
	this->_rawBits = raw;
}

//Converters
float	Fixed::toFloat( void ) const
{
	return (float(this->_rawBits / float(1 << this->_frBits)));
}

int	Fixed::toInt( void ) const
{
	return (this->_rawBits >> this->_frBits);
}

//Overload
std::ostream &	operator<<( std::ostream & o, Fixed const & rhs )
{
	o << rhs.toFloat();
	return (o);
}

std::ostream &	max( std::ostream & o, Fixed const & lhs, Fixed const & rhs )
{
	o << Fixed::max(lhs, rhs);
	return	(o);
}

std::ostream &	min( std::ostream & o, Fixed const & lhs, Fixed const & rhs )
{
	o << Fixed::min(lhs, rhs);
	return	(o);
}
