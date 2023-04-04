#include "Point.hpp"

Fixed	area(Point const v1, Point const v2, Point const v3)
{
	Fixed   ar = ((v1.getX() * (v2.getY() - v3.getY())) + (v2.getX() * (v3.getY() - v1.getY())) + ( v3.getX() * (v1.getY() - v2.getY()))) /Fixed(2);
    
    if (ar < Fixed(0))
        return (ar * Fixed(-1));
    return (ar);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed	pt1;
	Fixed	pt2;
	Fixed	pt3;
    Fixed   big;

    big = area(a, b, c);
	pt1 = area(point, b, c);
	pt2 = area(a, point, c);
	pt3 = area(a, b, point);

    if (big == 0 || pt1 == 0 || pt2 == 0 || pt3 == 0)
        return (0);
	return ( big == (pt1 + pt2 + pt3));
}