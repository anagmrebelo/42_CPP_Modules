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
//Vectors
std::vector<int> PmergeMe::insertSortVector( std::vector<int> vector ) {
	for (unsigned long i = 1; i < vector.size(); i++)
	{
		int	key = vector[i];
		int j = i - 1;
		while (j > -1 && vector[j] > key) {
			vector[j + 1] = vector[j];
			j--;
		}
		vector[j + 1] = key;
	}
	return vector;
}

std::vector<int>	PmergeMe::mergeVector( std::vector<int> left, std::vector<int> right ) {	
	std::vector<int> mergedVector;
	std::vector<int>::iterator leftIt, rightIt;

	leftIt = left.begin();
	rightIt = right.begin();

	while (leftIt != left.end() && rightIt != right.end()) {
		if (*leftIt < *rightIt) {
			mergedVector.push_back(*leftIt);
			leftIt++;
		} else {
			mergedVector.push_back(*rightIt);
			rightIt++;
		}
	}
	mergedVector.insert(mergedVector.end(), leftIt, left.end());
	mergedVector.insert(mergedVector.end(), rightIt, right.end());

	return mergedVector;
}

std::vector<int>	PmergeMe::insertMergeSortVector( std::vector<int> vector ) {
	if (vector.size() <= 5)
		return PmergeMe::insertSortVector(vector);
	else {
		unsigned long mid = vector.size() / 2;
		std::vector<int> left(vector.begin(), vector.begin() + mid);
		std::vector<int> right(vector.begin() + mid, vector.end());

		std::vector<int> leftMerged = PmergeMe::insertMergeSortVector(left);
		std::vector<int> rightMerged = PmergeMe::insertMergeSortVector(right);

		return PmergeMe::mergeVector(leftMerged, rightMerged);
	}
}

std::string PmergeMe::printVector( std::vector<int> vector ) {
	std::ostringstream oss;

	for (unsigned long i = 0; i < vector.size(); i++) {
		if (i > 10) {
			oss << "[...]";
			break ;
		}
		oss << vector[i] << " ";
	}
	return (oss.str());
}


std::vector<int>	PmergeMe::createVector(char **argv){
	std::vector<int>	vector;

	for (int i = 1; argv[i]; i++) {
		vector.insert(vector.end(), atoi(argv[i]));
	}
	return (vector);
}

//Lists
std::list<int> PmergeMe::insertSortList(std::list<int> list) {
    std::list<int>::iterator it, j;

    for (it = std::next(list.begin(), 1); it != list.end(); ++it) {
        int key = *it;
        j = it;

        while (j != list.begin() && *std::prev(j) > key) {
            *j = *(std::prev(j));
            --j;
        }
        *j = key;
    }

    return list;
}

std::list<int>	PmergeMe::mergeList( std::list<int> left, std::list<int> right ) {	
	std::list<int> mergedList;
	std::list<int>::iterator leftIt, rightIt;

	leftIt = left.begin();
	rightIt = right.begin();

	while (leftIt != left.end() && rightIt != right.end()) {
		if (*leftIt < *rightIt) {
			mergedList.insert(mergedList.end(), *leftIt);
			leftIt++;
		} else {
			mergedList.insert(mergedList.end(), *rightIt);
			rightIt++;
		}
	}
	mergedList.insert(mergedList.end(), leftIt, left.end());
	mergedList.insert(mergedList.end(), rightIt, right.end());
	
	return mergedList;
}


std::list<int>	PmergeMe::insertMergeSortlist( std::list<int> list ) {
	if (list.size() <= 5)
		return PmergeMe::insertSortList(list);
	else {
		unsigned long mid = list.size() / 2;
		std::list<int> left(list.begin(), std::next(list.begin(), mid));
		std::list<int> right(std::next(list.begin(), mid), list.end());

		std::list<int> leftMerged = PmergeMe::insertMergeSortlist(left);
		std::list<int> rightMerged = PmergeMe::insertMergeSortlist(right);

		return PmergeMe::mergeList(leftMerged, rightMerged);
	}
}

std::list<int>	PmergeMe::createList(char **argv){
	std::list<int>	list;

	for (int i = 1; argv[i]; i++) {
		list.push_back(atoi(argv[i]));
	}
	return (list);
}

std::string PmergeMe::printList( std::list<int> list ) {
	std::ostringstream oss;
	int counter = 0;

	for (std::list<int>::iterator it = list.begin(); it != list.end(); it++) {
		if (counter > 10) {
			oss << "[...]";
			break ;
		}
		oss << *it << " ";
		counter++;
	}
	return (oss.str());
}