#ifndef __PmergeMe_HPP__
# define __PmergeMe_HPP__

# include <vector>
# include <list>
# include <iostream>
# include <sstream>
# include <ctime>
# include <iomanip>

class PmergeMe
{
public:

	static void sortMerge( std::vector<int> vector);
	static void sortMerge( std::list<int> list );

	class Error : public std::exception {
		public:
			virtual const char * what() const throw() {
				return "Error" ;
		}
	};
private:
	PmergeMe( void );
	PmergeMe( PmergeMe const & src );
	~PmergeMe( void );
	PmergeMe & operator=( PmergeMe const & rhs );
};

#endif