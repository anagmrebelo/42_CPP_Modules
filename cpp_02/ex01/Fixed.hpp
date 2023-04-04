#ifndef __FIXED_H__
# define __FIXED_H__

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

	Fixed & operator=( Fixed const & rhs );
	
	int		getRawBits( void ) const;
	void	setRawBits( int const raw);

	float	toFloat( void ) const;
	int		toInt( void ) const;

private:
	int					_rawBits;
	static const int	_frBits;
};

std::ostream &	operator<<( std::ostream & o, Fixed const & rhs );

#endif
