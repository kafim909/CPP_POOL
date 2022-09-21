#include "Convert.Class.hpp"

Convert::Convert()
{

}

Convert::Convert(char* inputValue) : _inputValue(inputValue)
{
	// if (!inputValue)
	// 	throw(errors());
}

Convert::Convert(const Convert &copy)
{
    *this = copy;
}

Convert &Convert::operator=(const Convert& op)
{
	return (*this);
}

Convert::~Convert()
{

}

Convert::errors::errors()
{

}

Convert::errors::~errors() throw()
{
}

void	Convert::ConvertToInt()
{
	try 
	{
		std::cout << "int : " << stoi(static_cast<std::string>(_inputValue)) << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
