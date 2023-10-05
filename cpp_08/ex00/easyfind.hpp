#ifndef __EASYFIND_H__
# define __EASYFIND_H__

#include <iostream>
#include <algorithm>
#include <iterator>

template < typename T >
void	easyfind(T & src, int a )
{
	typename	T::iterator	it;

	it = find(src.begin(), src.end(), a);
	if (it == src.end())
		throw std::exception();
	std::cout << "That was an easy find!" << std::endl;
	return ;
}

#endif
