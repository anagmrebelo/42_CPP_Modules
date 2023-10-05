#include <iostream>
#include "iter.hpp"

template < typename T >
void	prints( T c)
{
	std::cout << c << std::endl;
	return ;
}

int	main( void )
{
	int hello[3] = {1, 2, 3};
	float bye[3] = {1.2, 2.3, 3.4};

	std::cout << "Should print 1\\n 2\\n 3\\n" << std::endl;
	iter(hello, 3, &prints);
	std::cout << "Should print 1.2\\n 2.3\\n 3.4\\n" << std::endl;
	iter(bye, 3, &prints);

	return (0);
}
