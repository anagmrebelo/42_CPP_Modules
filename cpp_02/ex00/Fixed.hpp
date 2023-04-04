#ifndef __FIXED_H__
# define __FIXED_H__

# include <iostream>

class	Fixed
{
public:
	Fixed( void );
	Fixed( Fixed const & src);
	~Fixed( void );
	Fixed & operator=( Fixed const & rhs );
	
	int	getRawBits( void ) const;
	void	setRawBits( int const raw);

private:
	int			        _rawBits;
	static const int	_frBits;
};

#endif
