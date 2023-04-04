#include "Point.hpp"
#include "Fixed.hpp"

#include <iostream>

bool	bsp(Point const a, Point const b, Point const c, Point const point);

int main( void ) {
	// No triangle
	std::cout << "NO TRIANGLE:" << std::endl;
	{
		Point	a(0.0f, 0.0f);
		Point	b(0.0f, 0.0f);
		Point	c(0.0f, 0.0f);
		Point	p(0.0f, 0.0f);
		std::cout << "1. " << (bsp(a, b, c, p) ? "true" : "false") << std::endl; // 1. false
	}

	std::cout << "\nLINE:" << std::endl;
	{
		Point a(Fixed(1), Fixed(1));
		Point b(Fixed(2), Fixed(2));
		Point c(Fixed(3), Fixed(3));
		Point p(Fixed(3), Fixed(3));
		std::cout << "1. " << (bsp(a, b, c, p) ? "true" : "false") << std::endl; // 1. false
	}

    // Test outside
	std::cout << "\nTEST OUTSIDE:" << std::endl;
	{
		Point a(Fixed(1), Fixed(1));
		Point b(Fixed(2), Fixed(2));
		Point c(Fixed(3), Fixed(1));
		Point p(Fixed(2), Fixed(3));
		std::cout << "1. " << (bsp(a, b, c, p) ? "true" : "false") << std::endl; // 1. true
	}

	// Test inside
	std::cout << "\nTEST INSIDE:" << std::endl;
	{
		Point a(Fixed(0), Fixed(0));
		Point b(Fixed(20), Fixed(0));
		Point c(Fixed(10), Fixed(30));
		Point p(Fixed(10), Fixed(15));
		std::cout << "1. " << (bsp(a, b, c, p) ? "true" : "false") << std::endl; // 1. true
	}

	// Test edges
	std::cout << "\nTEST EDGES:" << std::endl;
	{
		Point a(Fixed(1), Fixed());
		Point b(Fixed(-1), Fixed());
		Point c(Fixed(), Fixed(1));
		Point p(Fixed(0.5f), Fixed(0.5f));
		std::cout << "1. " << (bsp(a, b, c, p) ? "true" : "false") << std::endl; // 1. false
	}

	// Test vertex
	std::cout << "\nTEST VERTEX:" << std::endl;
	{
		Point a(Fixed(1), Fixed());
		Point b(Fixed(-1), Fixed());
		Point c(Fixed(), Fixed(1));
		Point p(Fixed(), Fixed(0.5f));
		std::cout << "1. " << (bsp(a, b, c, p) ? "true" : "false") << std::endl; // 1. true
		std::cout << "2. " << (bsp(a, b, c, a) ? "true" : "false") << std::endl; // 2. false
		std::cout << "3. " << (bsp(a, b, c, b) ? "true" : "false") << std::endl; // 3. false
		std::cout << "4. " << (bsp(a, b, c, c) ? "true" : "false") << std::endl; // 4. false
	}
}