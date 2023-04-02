/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebelo <arebelo@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 21:14:27 by arebelo           #+#    #+#             */
/*   Updated: 2022/06/29 21:14:28 by arebelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	check_null(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		if (*argv[i] != 0)
			return (1);
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	if (argc == 1 || !check_null(argc, argv))
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
		while (i < argc)
		{
			j = 0;
			while (argv[i][j])
				std::cout << (char) toupper(argv[i][j++]);
			i++;
		}
	std::cout << std::endl;
	return (0);
}
