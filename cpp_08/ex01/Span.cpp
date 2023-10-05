#include "Span.hpp"

//Constructors
Span::Span( void )
{
//	std::cout << "Default constructor called" << std::endl;
	return ;
}

Span::Span( unsigned int n ) : _max( n )
{
//	std::cout << "Constructor called" << std::endl;
	return;
}

Span::Span( Span const & src ) : _max( src.getMax() )
{
//	std::cout << "Copy constructor called" << std::endl;
	_arr = src.getArr();
	return ;
}

//Destructor
Span::~Span( void )
{
//	std::cout << "Default destructor called" << std::endl;
	return ;
}

//Assignation overload
Span &				Span::operator=( const Span & rhs )
{
	_arr = rhs.getArr();
	_max = rhs.getMax();
	return (*this);
}

//Getters
unsigned int		Span::getMax( void ) const
{
	return (this->_max);
}

std::vector<int>	Span::getArr( void ) const
{
	return (this->_arr);
}

//Member functions
void			Span::addNumber( int add )
{
	if(_arr.size() < _max)
		_arr.push_back(add);
	else
		throw Span::MaxElementsException();
	return ;
}

unsigned int	Span::shortestSpan( void )
{
	if (_arr.size() < 2)
		throw Span::MinElementsException();
	std::vector<int> 	temp;
	unsigned int		s_span;
	
	temp = _arr;
	std::sort(temp.begin(), temp.end());

	s_span = (unsigned int)temp[1] - (unsigned int)temp[0];

	for(std::vector<int>::iterator it = temp.begin(); it != temp.end(); it++)
	{
		if ((it + 1) != temp.end())
		{
			if (((unsigned int)*(it + 1) - (unsigned int)*it) < s_span)
				s_span = (unsigned int)*(it + 1) - (unsigned int)*it;
		}
	}
	return (s_span);
}

unsigned int	Span::longestSpan( void )
{
	if (_arr.size() < 2)
		throw Span::MinElementsException();

	int							min = *min_element(_arr.begin(), _arr.end());
	int							max = *max_element(_arr.begin(), _arr.end());
	
	return ((unsigned int)max - (unsigned int)min);
}

void			Span::printSpan( void )
{
	std::cout << "Span <";
	for (std::vector<int>::iterator it = _arr.begin(); it != _arr.end(); it++)
		std::cout << " " << *it;
	std::cout << " >" << std::endl;
}

//Exceptions
const char *	Span::MaxElementsException::what() const throw()
{
	return ("Addition not complete because it overpasses the defined limit");
}

const char *	Span::MinElementsException::what() const throw()
{
	return ("To make this operation the span has to have a minimum of 2 elements");
}
