#include "RPN.hpp"

static void validateExpr( std::string expr );
void	popCalculateAndPush( char c, std::stack<int> & stack );

// Constructors
RPN::RPN( void ) {
	return ;
}

RPN::RPN( RPN const & src) {
	(void) src;
	return ;
}

// Destructor
RPN::~RPN( void ) {
	return ;
}

// Assignation overload

// Methods
void RPN::calculateRPN(std::string expr) {
	std::stack<int> stack;

	validateExpr(expr);
	for (unsigned long i = 0; i < expr.length(); i++) {
		if (i % 2 == 0)
		{
			if (isdigit(expr[i]))
				stack.push(expr[i] - '0');
			else 
				popCalculateAndPush(expr[i], stack);
		}
		continue;
		
	}
	if (stack.size() != 1)
		throw RPN::Error();
	std::cout << stack.top() << std::endl; 
}

// Utils
bool	isOperator( char c ){
	if (c == '+' || c == '-' || c == '/' || c == '*')
		return (true);
	return (false);
}

static void validateExpr( std::string expr ) {
	for (unsigned long i = 0; i < expr.length(); i++) {
		if (i % 2 != 0 && expr[i] == ' ')
			continue;
		if (isdigit(expr[i]) || isOperator(expr[i]))
			continue ;
		else
			throw RPN::Error();
	}
}

void	popCalculateAndPush(char c, std::stack<int> & stack) {
	int first;
	int second;
	
	if (stack.size() < 2)
		throw RPN::Error();
	first = stack.top();
	stack.pop();
	second = stack.top();
	stack.pop();
	if (c == '+')
		stack.push(second + first);
	else if (c == '-')
		stack.push(second - first);
	else if (c == '*')
		stack.push(second * first);
	else
		stack.push(second / first);
}