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

std::vector<int> createVector(char **argv){
	std::vector<int> vector;

	for (int i = 1; argv[i]; i++) {
		vector.insert(vector.end(), atoi(argv[i]));
	}
	return (vector);
}

std::list<int> createList(char **argv){
	std::list<int> list;

	for (int i = 1; argv[i]; i++) {
		list.push_back(atoi(argv[i]));
	}
	return (list);
}

int main( int argc, char **argv) {
	try {
		validateArgs(argc, argv);
		{
			clock_t start = clock();
			std::vector<int> vector = createVector(argv);
			PmergeMe::sortMerge(vector);
			clock_t stop = clock();
			double duration = static_cast<double>(stop - start) / CLOCKS_PER_SEC;
			std::cout << std::fixed << std::setprecision(5) << duration << std::endl;
		}
		
		{
			std::cout << std::endl;
			clock_t start = clock();
			std::list<int> list = createList(argv);
			PmergeMe::sortMerge(list);
			clock_t stop = clock();
			double duration = static_cast<double>(stop - start) / CLOCKS_PER_SEC;
			std::cout << std::fixed << std::setprecision(5) << duration << std::endl;
		}

	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}
