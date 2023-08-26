/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebelo <arebelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 12:36:46 by arebelo           #+#    #+#             */
/*   Updated: 2023/08/26 17:51:54 by arebelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

Scalar::Scalar( char c ) : _charNP( false ), _charIMP( false ), _intIMP( 0 ), _floatIMP( 0 ), _char( c )
{
	this->_int = static_cast<int>(c);
	this->_float = static_cast<float>(c);
	this->_double = static_cast<double>(c);
	checkValues();
	//FILL CONVERSIONS
	return ;
}

Scalar::Scalar( int i ) : _charNP( false ), _charIMP( false ), _intIMP( 0 ), _floatIMP( 0 ), _int( i )
{
	this->_char = static_cast<char>(i);
	this->_float = static_cast<float>(i);
	this->_double = static_cast<double>(i);
	checkValues();
	//FILL CONVERSIONS
	return ;
}

Scalar::Scalar( float f ) : _charNP( false ), _charIMP( false ), _intIMP( 0 ), _floatIMP( 0 ), _float( f )
{
	this->_char = static_cast<char>(f);
	this->_int = static_cast<int>(f);
	this->_double = static_cast<double>(f);
	checkValues();
	//FILL CONVERSIONS;
	return ;
}

Scalar::Scalar( double d ) : _charNP( false ), _charIMP( false ), _intIMP( 0 ), _floatIMP( 0 ), _double( d )
{
	this->_char = static_cast<char>(d);
	this->_int = static_cast<int>(d);
	this->_float = static_cast<float>(d);
	checkValues();
	//FILL CONVERSIONS;
	return ;
}

Scalar::Scalar( Scalar const & src )
{
	*this = src;
	return ;
}

