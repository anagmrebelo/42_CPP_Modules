#include "Serializer.hpp"

//Constructors
Serializer::Serializer( void ){
	return ;
}

Serializer::Serializer(Serializer const & src){
	*this = src;
	return ;
}

//Destructors
Serializer::~Serializer( void ){
	return ;
}

//Assignation overload
Serializer &	Serializer::operator=( Serializer const & rhs )
{
	std::cout << "Assignation not allowed for Serializer's class" << std::endl;
	( void ) rhs;
	return (*this);
}

// Static functions
uintptr_t	Serializer::serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*	Serializer::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}