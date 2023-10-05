#include <iostream>
#include <limits.h>
#include "Span.hpp"

int	main(void)
{
	std::cout << "1. Create a Span" << std::endl;

		Span	sp = Span(5);
		Span	sp1 = Span(10);

	std::cout << std::endl << "----------------------------------------------------" << std::endl;

	std::cout << std::endl << "2. Try to calculate longest span with 0 elements ANSWER = Exception" << std::endl;

		try
		{
			std::cout << "Longest span: " << sp.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}

	std::cout << std::endl << "----------------------------------------------------" << std::endl;

	std::cout << std::endl << std::endl << "3. Try to calculate shortest span with 0 elements ANSWER = Exception" << std::endl;

		try
		{
			std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << "std::exception: "<<e.what() << '\n';
		}

	std::cout << std::endl << "----------------------------------------------------" << std::endl;
	
	std::cout << std::endl << "4. Add number -5 and try to calculate shortest span with 0 elements ANSWER = Exception" << std::endl;

		try
		{
			sp.addNumber(-5);
			sp.printSpan();
			std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << "std::exception: "<<e.what() << '\n';
		}

	std::cout << std::endl << "----------------------------------------------------" << std::endl;
	
	std::cout << std::endl << "5. Add numbers 2 3" << std::endl;
		try
		{
			sp.addNumber(2);
			sp.addNumber(3);
			sp.printSpan();
		}
		catch(const std::exception& e)
		{
			std::cerr << "std::exception: "<<e.what() << '\n';
		}

	std::cout << std::endl << "----------------------------------------------------" << std::endl;

	std::cout << std::endl << "6. Calculate longest span ANSWER = 8" << std::endl;

		try
		{
			std::cout << "Longest span: " << sp.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}

	std::cout << std::endl << "----------------------------------------------------" << std::endl;

	std::cout << std::endl << "7. Calculate shortest span ANSWER = 1" << std::endl;

		try
		{
			std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << "std::exception: "<<e.what() << '\n';
		}

	std::cout << std::endl << "----------------------------------------------------" << std::endl;

	std::cout << std::endl << "8. Add INT_MAX & INT_MIN and calculate longest span ANSWER = 4294967295" << std::endl;

		try
		{
			sp.addNumber(INT_MAX);
			sp.addNumber(INT_MIN);
			sp.printSpan();
			std::cout << "Longest span: " << sp.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << "std::exception: "<<e.what() << '\n';
		}

	std::cout << std::endl << "----------------------------------------------------" << std::endl;

	std::cout << std::endl << "9. Try to add more numbers ANSWER = Exception" << std::endl;

		try
		{
			sp.addNumber(INT_MAX);
			sp.addNumber(INT_MIN);
			sp.printSpan();
			std::cout << "Longest span: " << sp.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << "std::exception: "<<e.what() << '\n';
		}

	std::cout << std::endl << "----------------------------------------------------" << std::endl;

	std::cout << std::endl << "10. Create new Span wit number < 5 5 > and calculate longest and shortest span ANSWER 0 (for both)" << std::endl;

		try
		{
			sp1.addNumber(5);
			sp1.addNumber(5);
			sp1.printSpan();
			std::cout << "Longest span: " << sp1.longestSpan() << std::endl;
			std::cout << "Shortest span: " << sp1.shortestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	std::cout << std::endl << "----------------------------------------------------" << std::endl;

	// std::cout << std::endl << "11. Try to add character 'c'" << std::endl;

	// 	try	
	// 	{
	// 		std::vector<int> vec {1, 2, 3};
	// 		std::vector<int>::iterator it1 = vec.begin();
	// 		std::vector<int>::iterator it2 = vec.end();

	// 		sp1.addNumber(it1, it2);
	// 	}
	// 	catch(const std::exception& e)
	// 	{
	// 		std::cerr << e.what() << '\n';
	// 	}
	// std::cout << std::endl << "----------------------------------------------------" << std::endl;

	return (0);
}

//TO DOs
	// Testar com iterators de listas e outros container con int
	// Try with a vector of 10k and try functions
	// How to make sure what is inside iterator is int - try with chars
	// How to make sure if it doesnt accept int or char instead of iterators
	// REVER addNumber() - perceber se é suposto receber ints ou iterators