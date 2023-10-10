#include <iostream>
#include "iter.hpp"

class Awesome
{
  public:
    Awesome( void ) : _n( 42 ) { return; }
    int get( void ) const { return this->_n; }
  private:
    int _n;
};

template < typename T >
void	prints( T c)
{
	std::cout << c << std::endl;
	return ;
}

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

template< typename T >
void print( T const & x ) { std::cout << x << std::endl; return; }

int main() {
	{
		int tab[] = { 0, 1, 2, 3, 4 };
		Awesome tab2[5];
		iter( tab, 5, print<int> );
		iter( tab2, 5, print<Awesome> );
	}

	{
		int hello[3] = {1, 2, 3};
		float bye[3] = {1.2, 2.3, 3.4};

		std::cout << "Should print 1\\n 2\\n 3\\n" << std::endl;
		iter(hello, 3, &prints);
		std::cout << "Should print 1.2\\n 2.3\\n 3.4\\n" << std::endl;
		iter(bye, 3, &prints);
	}

	return 0;
}