#ifndef __SCALAR_H__
# define __SCALAR_H__

#include "header.h"

class	Scalar 
{
public:
	Scalar( char c );
	Scalar( int i );
	Scalar( float f );
	Scalar( double d );
	Scalar( Scalar const & src );
	~Scalar( void );

	Scalar &	operator=( Scalar const & rhs );

	char		getChar( void ) const;
	int			getInt( void ) const;
	float		getFloat( void ) const;
	double		getDouble( void ) const;
	bool		getCharNP( void ) const;
	bool		getCharIMP( void ) const;
	bool		getIntIMP( void ) const;
	bool		getFloatIMP( void ) const;
	
	void		checkValues( void );

private:
	bool				_charNP;
	bool				_charIMP;
	bool				_intIMP;
	bool				_floatIMP;
	
	char				_char;
	int					_int;
	float				_float;
	double				_double;

	Scalar( void );
};

std::ostream &	operator<<( std::ostream & o, Scalar const & rhs );

#endif
