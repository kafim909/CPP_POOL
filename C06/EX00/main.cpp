#include "Convert.Class.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << RED << "BAD INPUT" << RESET << std::endl;
		return (1);
	}
	Convert convert;
	int type = convert.getInputType(argv[1]);
	switch (type)
	{
		case (0) :
			convert.printNone();
			break;
		case (1) :
			try
			{
				convert.ConvertToInt(argv[1]);
			}
			catch(const std::exception& e)
			{
				std::cout << RED << "Error : Trying to pass an overflowed Int as argument, cannot make further conversion" << RESET << std::endl;
			}
			break;
		case (2) :
			try
			{
				convert.ConvertToFloat(argv[1]);
			}
			catch(const std::exception& e)
			{
				std::cout << RED << "Error : Trying to pass an overflowed Float as argument, cannot make further conversion" << RESET << std::endl;
			}
			break;
		case (3) :
			try
			{
				convert.ConvertToDouble(argv[1]);
			}
			catch(const std::exception& e)
			{
				std::cout << RED << "Error : Trying to pass an overflowed Double as argument, cannot make further conversion" << RESET << std::endl;
			}
			break;
		case (4) :
			convert.ConvertToChar(argv[1]);
			break;
	}

}