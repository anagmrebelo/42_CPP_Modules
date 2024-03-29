/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebelo <arebelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 13:47:52 by arebelo           #+#    #+#             */
/*   Updated: 2023/04/13 13:49:17 by arebelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed	area(Point const v1, Point const v2, Point const v3)
{
	return (v1.getX() - v3.getX()) * (v2.getY() - v3.getY()) - (v2.getX() - v3.getX()) * (v1.getY() - v3.getY());
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed	pt1;
	Fixed	pt2;
	Fixed	pt3;	

	bool	neg;
	bool	pos;

	pt1 = area(point, a, b);
	pt2 = area(point, b, c);
	pt3 = area(point, c, a);

	if (pt1 == 0 || pt2 == 0 || pt3 == 0)
		return (0);
	neg = (pt1 < 0) || (pt2 < 0) || (pt3 < 0);
	pos = (pt1 > 0) || (pt2 > 0) || (pt3 > 0);

	return (!(neg && pos));
}
