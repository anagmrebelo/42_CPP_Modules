#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cmath>
#include <iostream>


Base *  generate ( void )
{
	srand(time(0));
	int randomPos = rand() % 3;

	Base* optionsArr[3] = {new A(), new B(), new C()};
	
	int i = -1;
	while (++i < 3)
	{
		if (i != randomPos)
			delete optionsArr[i];
	}

	return  optionsArr[randomPos];
}

void	identify(Base* p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "C" << std::endl;
	else 
		std::cout << "Not valid arg" << std::endl;
}

void	identify(Base& p)
{
	try {
		A conv = dynamic_cast<A&>(p);
		(void) conv;
		std::cout << "A" << std::endl;
		return ;
	} catch (std::exception &e) {
		;
	}

	try {
		B conv = dynamic_cast<B&>(p);
		(void) conv;
		std::cout << "B" << std::endl;
		return ;
	} catch (std::exception &e) {
		;
	}
	
	try {
		C conv = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
		return ;
	} catch (std::exception &e) {
		;
	}
	std::cout << "Not valid arg" << std::endl;
}