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
			convert.ConvertToInt(argv[1]);
			break;
		// case (2) :
		// 	convert.ConvertToFloat(argv[1]);
		// 	break;
		// case (3) :
		// 	convert.ConvertToDouble(argv[1]);
		// 	break;
		// case (4) :
		// 	convert.ConvertToChar(argv[1]);
		// 	break;
	}

}