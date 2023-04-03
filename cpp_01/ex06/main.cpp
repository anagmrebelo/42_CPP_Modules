/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebelo <arebelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 02:55:55 by arebelo           #+#    #+#             */
/*   Updated: 2023/04/03 19:29:13 by arebelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main ( int argc, char **argv )
{
	Harl	instance;
	
	if (argc != 2)
		return (1);
	instance.complain(argv[1]);
	return (0);
}
