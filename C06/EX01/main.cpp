#include "Data.Class.hpp"

uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}

int main()
{
	uintptr_t ptr;

	std::cout << RED <<"FIRST TEST with memory alocated pointer to Data object" << RESET <<std::endl;

	Data *data1 = new Data(5, 5.456);
	std::cout << YELLOW << "print data before Serialize : "  << RESET << *data1;
	ptr = serialize(data1);
	data1 = deserialize(ptr);
	std::cout << GREEN << "print data After Serialize   : "  << RESET << *data1;
	delete data1;

	std::cout << RED <<"SECOND TEST without memory allocation" << RESET <<std::endl;
	Data *dataptr;
	Data data2(25600, 25600.789);
	dataptr = &data2;
	std::cout << YELLOW << "print data before Serialize : "  << RESET << *dataptr;
	ptr = serialize(dataptr);
	dataptr = deserialize(ptr);
	std::cout << GREEN << "print data After Serialize   : "  << RESET << *dataptr;
}