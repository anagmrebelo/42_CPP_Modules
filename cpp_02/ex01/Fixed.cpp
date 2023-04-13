/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebelo <arebelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 13:44:26 by arebelo           #+#    #+#             */
/*   Updated: 2023/04/13 13:44:29 by arebelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::_frBits = 8;

//Default constructor
Fixed::Fixed( void ) : _rawBits( 0 )
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

//Copy constructor
Fixed::Fixed( Fixed const & src )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return;
}

Fixed::Fixed( int const src )
{
	std::cout << "Int constructor called" << std::endl;
	this->_rawBits = (src << Fixed::_frBits);
	return ;
}

Fixed::Fixed( float const src )
{
	std::cout << "Float constructor called" << std::endl;
	this->_rawBits = int(roundf(src * (1 << this->_frBits)));
	return ;
}

//Destructor
Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

//Assignation operator
Fixed &	Fixed::operator=( Fixed const & rhs )
{
	std::cout << "Assignation operator called" << std::endl;
	this->_rawBits = rhs.getRawBits();
	return *this;
}

//Getters
int	Fixed::getRawBits( void ) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return this->_rawBits;
}

//Setters
void	Fixed::setRawBits(int const raw)
{
	// std::cout << "setRawBits member function called" << std::endl;
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

//Operator overload
std::ostream &	operator<<( std::ostream & o, Fixed const & rhs )
{
	o << rhs.toFloat();
	return o;
}
