#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);

int	main( void )
{
	Point	a (0.0f, 0.0f);
	Point	b (0.0f,0.0f);
	Point	c (0.0f, 0.0f);
	Point	point(0.0f, 0.0f);
	
	if (bsp(a, b, c, point))
		std::cout << "Point is inside the triangle!" << std::endl;
	// else
	// 	std::cout << "Point is outside the triangle!" << std::endl;
	return (0);
}