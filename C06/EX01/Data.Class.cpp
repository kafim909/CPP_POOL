#include "Data.Class.hpp"

Data::Data(int dataI, float dataF) : _dataI(dataI), _dataF(dataF){}

Data::Data(const Data &copy) : _dataI(copy.getDataI()) , _dataF(copy.getDataF()) {}

Data &Data::operator=(const Data& op)
{
	return (*this);
}

Data::~Data(){}

int		Data::getDataI() const
{
	return (_dataI);
}

float	Data::getDataF() const
{
	return (_dataF);
}

std::ostream &operator<<(std::ostream &out, Data &data)
{
	std::cout << data.getDataF() << " | " << data.getDataI() << std::endl;
	return (out);
}