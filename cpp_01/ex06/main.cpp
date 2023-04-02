/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebelo <arebelo@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 02:55:55 by arebelo           #+#    #+#             */
/*   Updated: 2022/06/29 20:17:51 by arebelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main ( int argc, char **argv )
{
	Karen	instance;
	
	if (argc != 2)
		return (1);
	instance.complain(argv[1]);
	return (0);
}
