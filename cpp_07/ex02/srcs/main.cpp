#include <iostream>
#include "Array.hpp"


#define MAX_VAL 750
int main(int, char**)
{
	{    
		Array<int> numbers(MAX_VAL);
		int* mirror = new int[MAX_VAL];
		srand(time(NULL));

		try
		{
			for (int i = 0; i < MAX_VAL; i++)
			{
				const int value = rand();
				numbers[i] = value;
				mirror[i] = value;
			}
		}
		catch(const std::exception& e)
		{
			std::cerr << "You shouldn't catch this exception:  " << e.what() << '\n';
		}
		
		//SCOPE
		{
		Array<int> tmp = numbers;
		Array<int> test(tmp);
		}

		for (int i = 0; i < MAX_VAL; i++)
		{
			if (mirror[i] != numbers[i])
			{
				std::cerr << "didn't save the same value!!" << std::endl;
				return 1;
			}
		}
		try
		{
			numbers[-2] = 0;
		}
		catch(const std::exception& e)
		{
			std::cerr << "First exception that should be caught: " <<e.what() << '\n';
		}
		try
		{
			numbers[MAX_VAL] = 0;
		}
		catch(const std::exception& e)
		{
			std::cerr << "Second exception that should be caught: " << e.what() << '\n';
		}

		for (int i = 0; i < MAX_VAL; i++)
		{
			numbers[i] = rand();
		}
		delete [] mirror;
	}

	{
		Array<int> numbers(MAX_VAL);
		int* mirror = new int[MAX_VAL];
		srand(time(NULL));
		for (int i = 0; i < MAX_VAL; i++)
		{
			const int value = rand();
			numbers[i] = value;
			mirror[i] = value;
		}
		//SCOPE
		{
			Array<int> tmp = numbers;
			Array<int> test(tmp);
		}

		for (int i = 0; i < MAX_VAL; i++)
		{
			if (mirror[i] != numbers[i])
			{
				std::cerr << "didn't save the same value!!" << std::endl;
				return 1;
			}
		}
		try
		{
			numbers[-2] = 0;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			numbers[MAX_VAL] = 0;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}

		for (int i = 0; i < MAX_VAL; i++)
		{
			numbers[i] = rand();
		}
		delete [] mirror;
	}
	{
		Array<int>			intArray;
		Array<std::string>	stringArray(10);
		Array<std::string>	otherStringArray;

		stringArray[0] = "Hi";
		stringArray[1] = "Hello";
		stringArray[2] = "How are you?";
		stringArray[3] = "Fine and you?";
		stringArray[4] = "Doing great thanks!";
		stringArray[5] = "You're very welcome";
		std::cout << "intArray.size() = " << intArray.size() << std::endl;
		std::cout << "stringArray.size() = " << stringArray.size() << std::endl;
		
		otherStringArray = stringArray;
		otherStringArray[3] = "I'm good, how about you?";
		std::cout << stringArray[0] << std::endl;
		std::cout << stringArray[1] << std::endl;
		std::cout << stringArray[2] << std::endl;
		std::cout << stringArray[3] << std::endl;
		std::cout << stringArray[4] << std::endl;
		std::cout << stringArray[5] << std::endl;
		

		std::cout << std::endl;
		try
		{
			std::cout << stringArray[59] << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}

		try
		{
			std::cout << stringArray[-3] << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}

    return 0;
}