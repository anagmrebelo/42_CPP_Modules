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

// Utils
std::string printVector( std::vector<int> vector ) {
	std::ostringstream oss;

	for (unsigned long i = 0; i < vector.size(); i++) {
		if (i > 3) {
			oss << "[...]";
			break ;
		}
		oss << vector[i] << " ";
	}
	return (oss.str());
}

std::string printList( std::list<int> list ) {
	std::ostringstream oss;
	int counter = 0;

	for (std::list<int>::iterator it = list.begin(); it != list.end(); it++) {
		if (counter > 3) {
			oss << "[...]";
			break ;
		}
		oss << *it << " ";
		counter++;
	}
	return (oss.str());
}

// Methods
void PmergeMe::sortMerge( std::vector<int> vector ) {
	std::cout << "Before: " << printVector(vector) << std::endl;
	std::cout << "After: " << printVector(vector) << std::endl;
	std::cout << "Time to process a range of " << vector.size() << " elements with std::vector: " << NULL << " us" << std::endl;
}

void PmergeMe::sortMerge( std::list<int> list ) {
	std::cout << "Before: " << printList(list) << std::endl;
	std::cout << "After: " << printList(list) << std::endl;
	std::cout << "Time to process a range of " << list.size() << " elements with std::list: " << NULL << " us" << std::endl;
}