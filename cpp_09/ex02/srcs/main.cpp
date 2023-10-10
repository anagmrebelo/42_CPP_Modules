#include "PmergeMe.hpp"

bool isOnlyDigits(char *str) {
	for (unsigned long i = 0; str[i]; i++) {
		if (!isdigit(str[i]))
			return (false);
	}
	return (true);
}

void validateArgs(int argc, char **argv) {
	
	if (argc < 2)
		throw PmergeMe::Error();
	for (int i = 1; argv[i]; i++) {
		if (!isOnlyDigits(argv[i]))
			throw PmergeMe::Error();
		try {
			if (atof(argv[i]) > std::numeric_limits<int>::max())
				throw PmergeMe::Error();
		} catch (std::exception & e) {
			throw PmergeMe::Error();
		}
	}
	return ;
}

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

int main( int argc, char **argv) {
	try {
		std::vector<int> vector;
		std::list<int> list;
		std::vector<int> vectorSorted;
		std::list<int> listSorted;

		double durationVec;
		double durationList;

		validateArgs(argc, argv);

		{
			clock_t start = clock();
			vector = PmergeMe::createVector(argv);
			vectorSorted = PmergeMe::sortMerge(vector);
			clock_t stop = clock();
			durationVec = static_cast<double>(stop - start) / CLOCKS_PER_SEC * 1000;
		}
		
		{
			clock_t start = clock();
			list = PmergeMe::createList(argv);
			listSorted = PmergeMe::sortMerge(list);
			clock_t stop = clock();
			durationList = static_cast<double>(stop - start) / CLOCKS_PER_SEC * 1000;
		}

		std::cout << "Before: " << printVector(vector) << std::endl;
		std::cout << "After: " << printVector(vector) << std::endl;
		std::cout << "Time to process a range of " << vector.size() << " elements with std::vector: " << std::fixed << std::setprecision(5) << durationVec << " miliseconds" << std::endl;
		std::cout << "Time to process a range of " << list.size() << " elements with std::list: " << std::fixed << std::setprecision(5) << durationList << " miliseconds" << std::endl;


	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}
