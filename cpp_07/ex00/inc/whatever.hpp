#ifndef __WHATEVER_HPP__
# define __WHATEVER_HPP__

template< typename T >

T const &	max( T const & x, T const & y )
{
	return ( x > y ? x : y );
}

template< typename T >
T const &	min( T const & x, T const & y )
{
	return ( x < y ? x : y );
}

template< typename T >
void	swap( T & x, T & y )
{
	T	temp;
	temp = x;
	x = y;
	y = temp;
	return ;
}

#endif
