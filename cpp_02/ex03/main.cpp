/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebelo <arebelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 13:48:01 by arebelo           #+#    #+#             */
/*   Updated: 2023/04/13 13:48:28 by arebelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);

int	main( void )
{
	std::cout << "Inside Triangle -> should print 1" << std::endl;
	{
		Point	a(1.0f, 0.0f);
		Point	b(2.0f,1.0f);
		Point	c(3.0f, 0.0f);
		Point	point(2.0f, 0.5f);
		std::cout << bsp(a, b, c, point) << std::endl;
	}

	std::cout << std::endl << "Outside Triangle -> should print 0" << std::endl;
	{
		Point	a(1.0f, 0.0f);	
		Point	b(2.0f,1.0f);
		Point	c(3.0f, 0.0f);
		Point	point(2.0f, 3.0f);
		std::cout << bsp(a, b, c, point) << std::endl;
	}

	std::cout << std::endl << "In a line -> should print 0" << std::endl;
	{
		Point	a(1.0f, 0.0f);
		Point	b(2.0f,0.0f);
		Point	c(3.0f, 0.0f);
		Point	point(4.0f, 0.0f);
		std::cout << bsp(a, b, c, point) << std::endl;
	}

	std::cout << std::endl << "Vertices of triangle -> should print 0" << std::endl;
	{
		Point	a(1.0f, 0.0f);
		Point	b(2.0f,1.0f);
		Point	c(3.0f, 0.0f);
		Point	point(3.0f, 0.0f);
		std::cout << bsp(a, b, c, point) << std::endl;
	}

	std::cout << std::endl << "On a egde of triangle -> should print 0" << std::endl;
	{
		Point	a(1.0f, 0.0f);
		Point	b(3.0f, 0.0f);
		Point	c(2.0f, 1.0f);
		Point	point(2.0f, 0.0f);
		std::cout << bsp(a, b, c, point) << std::endl;
	}

	return (0);
}