#include "PmergeMe.hpp"

//Constructors
PmergeMe::PmergeMe( void ) {
	return ;
}

PmergeMe::PmergeMe( PmergeMe const & src) {
	(void) src;
	return ;
}

//Destructors
PmergeMe::~PmergeMe( void ) {
	return ;
}

// Assignation overload
PmergeMe & PmergeMe::operator=(PmergeMe const & rhs) {
	(void) rhs;
	return (*this);
}

// Methods
std::vector<int> PmergeMe::sortMerge( std::vector<int> vector ) {
	return vector;
}

std::list<int> PmergeMe::sortMerge( std::list<int> list ) {
	return list;
}

std::vector<int>	PmergeMe::createVector(char **argv){
	std::vector<int> vector;

	for (int i = 1; argv[i]; i++) {
		vector.insert(vector.end(), atoi(argv[i]));
	}
	return (vector);
}

std::list<int>	PmergeMe::createList(char **argv){
	std::list<int> list;

	for (int i = 1; argv[i]; i++) {
		list.push_back(atoi(argv[i]));
	}
	return (list);
}