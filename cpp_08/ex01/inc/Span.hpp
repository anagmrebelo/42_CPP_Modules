#ifndef __SPAN_H__
# define __SPAN_H__

# include <vector>
# include <iterator>
# include <iostream>
# include <algorithm>

class   Span
{
public:
    Span( unsigned int n );
    Span( Span const & src );
    ~Span( void );

    Span &  operator=( Span const & rhs );

    unsigned int	    getMax( void ) const;
    std::vector<int>	getArr( void ) const;

    unsigned int	shortestSpan( void );
    unsigned int	longestSpan( void );

    void             printSpan( void );

    void    		addNumber( int add );
    void    		addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end );

    class MaxElementsException : public std::exception
    {
    public:
        virtual const char *    what() const throw();
    };

    class MinElementsException : public std::exception
    {
    public:
        virtual const char *    what() const throw();
    };

private:
    std::vector<int> 	_arr;
    unsigned int	    _max;

    Span( void );
};

#endif