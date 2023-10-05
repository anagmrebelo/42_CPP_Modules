#include <iostream>
#include "easyfind.hpp"
#include <vector>
#include <list>

int	main( int argc, char **argv )
{

	std::vector<int> arr_int = { 1, 2, 3, 4, 5 }; 	
	std::list<int>	lst_int({1, 2, 3, 4, 5});	//List of 5 elements initialized with 2

	(void) argc;
	(void) argv;
	try
	{
		std::cout << "1. Trying to find 2 in vector<1, 2, 3, 4, 5>" << std::endl;
		easyfind(arr_int, 2);	
	}
	catch(const std::exception & e)
	{
		std::cerr << "No occurrence is found" << std::endl;
	}

//-----------------------------------------------------------------------------------------------------//
	
	std::cout << std::endl;
	try
	{
		std::cout << "2. Trying to find 6 in vector<1, 2, 3, 4, 5>" << std::endl;
		easyfind(arr_int, 6);	
	}
	catch(const std::exception & e)
	{
		std::cerr << "No occurrence is found" << std::endl;
	}

//-----------------------------------------------------------------------------------------------------//
	
	std::cout << std::endl;
	try
	{
		std::cout << "3. Trying to find 2 in list<1, 2, 3, 4, 5>" << std::endl;
		easyfind(lst_int, 2);
	}
	catch(const std::exception & e)
	{
		std::cerr << "No occurrence is found" << std::endl;
	}

//-----------------------------------------------------------------------------------------------------//
	
	std::cout << std::endl;
	
	try
	{
		std::cout << "4. Trying to find 6 in list<1, 2, 3, 4, 5>" << std::endl;
		easyfind(lst_int, 6);	
	}
	catch(const std::exception & e)
	{
		std::cerr << "No occurrence is found" << std::endl;
	}
	return (0);
}
