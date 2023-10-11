#include "RPN.hpp"

int main(int argc, char **argv) {

	try {
		if (argc != 2){
			throw RPN::Error();
			return (1);
		}
		RPN::calculateRPN(argv[1]);
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	return (0);

}