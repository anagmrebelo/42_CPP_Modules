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

	static std::vector<int> createVector( char **argv );
	static std::vector<int> insertMergeSortVector( std::vector<int> vector);
	static std::string 		printVector( std::vector<int> vector );

	static std::list<int> 	createList( char **argv );
	static std::list<int>	insertMergeSortlist( std::list<int> list );
	static std::string 		printList( std::list<int> list );
	


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
	
	static std::vector<int> insertSortVector( std::vector<int> vector );
	static std::vector<int>	mergeVector( std::vector<int> left, std::vector<int> right );
	
	static std::list<int>	insertSortList( std::list<int> list );
	static std::list<int>	mergeList( std::list<int> left, std::list<int> right );
};

#endif