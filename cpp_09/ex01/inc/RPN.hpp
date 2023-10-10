#ifndef __RPN_HPP__
# define __RPN_HPP__

# include <stack>
# include <iostream>

class RPN {
public:
	static void	calculateRPN(std::string expr);

	class Error : public std::exception {
		public:
			virtual const char * what() const throw() {
				return ("Error.");
			}
	};

private:
	RPN( void );
	RPN( RPN const & src );
	~RPN( void );
	RPN &	operator=( RPN const & rhs );
};
#endif