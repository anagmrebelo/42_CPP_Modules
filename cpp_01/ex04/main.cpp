/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarebelo <anarebelo@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 16:37:48 by arebelo           #+#    #+#             */
/*   Updated: 2023/04/03 12:03:32 by anarebelo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	main( int argc, char **argv )
{
	if (argc == 4)
	{
		std::string		str;
		std::string		filename;
		std::string		s1;
		std::string		s2;
		size_t			i;

		filename		= argv[1];
		s1				= argv[2];
		s2				= argv[3];
		std::ifstream	ifs(filename);
		
		//Error control
		if (!ifs || !s1.compare("\0") || !s2.compare("\0"))
		{
			std::cout << "Insert valid inputs" << std::endl;
			return (1);
		}
		std::ofstream	ofs(filename + ".replace");
		if (!ofs)
		{
			ifs.close();
			return (1);
		}	
		//Reading from file
		str.assign(std::istreambuf_iterator <char> (ifs), std::istreambuf_iterator<char>());
		i = 0;
		while (i != std::string::npos)
		{
			i = str.find(s1, i);
			if ( i != std::string::npos)
			{
				str.erase(i, s1.length());
				str.insert(i, s2);
				i += s2.length();
			}
		}
		ofs << str;
		ifs.close();
		ofs.close();
		return (0);
	}
	std::cout << "Insert valid inputs" << std::endl;
	return (1);
}
