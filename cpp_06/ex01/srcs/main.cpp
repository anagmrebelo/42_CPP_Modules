#include <iostream>
#include "Data.hpp"
#include "Serializer.hpp"

int	main( void ){

	Data data;
	data.level = 3;
	data.text = "hello";

	std::cout << "<---------- Before serialization and deserialization ---------->" << std::endl;
	std::cout << data.level << std::endl;
	std::cout << data.text << std::endl;

	uintptr_t data_serial = Serializer::serialize(&data);
	Data * data_deserial = Serializer::deserialize(data_serial);
	
	std::cout << "<---------- After serialization and deserialization ----------->" << std::endl;
	std::cout << data_deserial->level << std::endl;
	std::cout << data_deserial->text << std::endl;
}