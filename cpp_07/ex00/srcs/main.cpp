#include <iostream>
#include "whatever.hpp"

int	main( void )
{
	int	a = 2;
	int	b = 3;

	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min(a, b) = " << ::min( a, b ) << std::endl;
	std::cout << "max(a, b) = " << ::max( a, b ) << std::endl;

	std::string	c = "chaine1";
	std::string	d = "chaine2";

	::swap( c, d );
	std::cout << "min(c, d) = " << ::min( c, d ) << std::endl;
	std::cout << "max(c, d) = " << ::max( c, d ) << std::endl;

	//::swap( c, d );
	int	e = 3;
	std::cout << "min(a, e) = " << ::min( a, e ) << std::endl;
	std::cout << "min(NULL, NULL) = " << ::min( NULL, NULL ) << std::endl;
	
	return (0);
}
