#ifndef __SCALAR_CONVERTER_HPP__
# define __SCALAR_CONVERTER_HPP__

class	ScalarConverter 
{
public:
	static void convert(std::string str_lit);

private:
	ScalarConverter( void );
	ScalarConverter(ScalarConverter const & src);
	~ScalarConverter( void );
	ScalarConverter &	operator=( ScalarConverter const & rhs );

};

#endif