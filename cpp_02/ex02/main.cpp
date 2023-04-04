#include "Fixed.hpp"

int	main( void )
{
	Fixed 	a;
	Fixed const	b(Fixed(5.05f) * Fixed(2));

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;

	std::cout << "Test Sum 2 + 2.5f: " << Fixed(2) + Fixed(2.5f)  << std::endl;
	std::cout << "Test Sum 2 - 2.5f: " << Fixed(2) - Fixed(2.5f)  << std::endl;
	std::cout << "Test Multipliction 2 * 2.5f: " << Fixed(2) * Fixed(2.5f)  << std::endl;
	std::cout << "Test Division 5 / 2.5f: " << Fixed(5) / Fixed(2.5f)  << std::endl;
	return (0);
}
