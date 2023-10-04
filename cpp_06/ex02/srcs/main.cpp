#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>

Base *  generate ( void );
void	identify(Base* p);
void	identify(Base& p);

int	main( void ) {

	Base * base = generate();
	std::cout <<  "<---- Identify with pointer ---->" << std::endl;
	identify(base);
	std::cout <<  "<---- Identify with reference ---->" << std::endl;
	identify(*base);

	delete base;

	return (0);
}