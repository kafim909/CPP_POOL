#include "Convert.Class.hpp"

Convert::Convert(){}
Convert::Convert(const Convert &copy){}
Convert &Convert::operator=(const Convert& op)
{
	return (*this);
}
Convert::~Convert(){}
Convert::errors::errors(){}
Convert::errors::~errors() throw(){}

bool isNum(char c)
{
	if (c < 48 || c > 57)
		return (false);
	return (true);
}

bool 	checkInt(const char *input)
{
	int j = 0;  								// variable to check if the first caracter is '-'
	if(input[0] == '-' && input[1])
		j = 1;
	for (int i = 0 + j; input[i]; i++)
	{
		if (!isNum(input[i]))
			return (false);
	}
	return (true);
}

bool checkfloat(const char *input)
{
	std::string tmp = static_cast<std::string>(input);
	if (!tmp.compare("nanf") || !tmp.compare("-inff") || !tmp.compare("+inff"))
		return (true);
	int coma = 0;
	int f = 0;
	int i = -1;
	if(input[0] == '-' && input[1])
		i++;
	while (input[++i])
	{
		if (!isNum(input[i]))
		{
			if (input[i] == ',' || input[i] == '.')
			{
				if(!coma)
					coma = 1;
				else
					return (false);
				continue;
			}
			if (input[i] == 'f' && !input[i + 1])
			{
				if (!f)
					f = 1;
				else
					return (false);
				continue;
			}
			return (false);
		}
	}
	if (coma && f && !input[i])
		return (true);
	return (false);
}

bool	checkDouble(const char *input)
{
	std::string tmp = static_cast<std::string>(input);
	if (!tmp.compare("nan") || !tmp.compare("-inf") || !tmp.compare("+inf"))
		return (true);
	int coma = 0;
	int i = -1;
	if(input[0] == '-' && input[1])
		i++;
	while (input[++i])
	{
		if (!isNum(input[i]))
		{
			if (input[i] == ',' || input[i] == '.')
			{
				if(!coma)
					coma = 1;
				else
					return (false);
				continue;
			}
			return (false);
		}
	}
	if (coma && !input[i])
		return (true);
	return (false);
}

const int	Convert::getInputType(const char *input)
{
	int	i;

	i = -1;
	if (checkInt(input))
		return (1);
	if (checkfloat(input))
		return (2);
	if (checkDouble(input))
		return (3);
	if (input[0] && !input[1])
		return (4);
	return (0);
}

void	Convert::printNone()
{
	std::cout << "char  : impossible" << std::endl;
	std::cout << "int   : impossible" << std::endl;
	std::cout << "float : impossible" << std::endl;
	std::cout << "doube : impossible" << std::endl;
}

void	Convert::ConvertToInt(const char *input)
{
	long long int tmp =  stoi(static_cast<std::string>(input));
	if (tmp > 0 && tmp < 127)
	{
		if (tmp > 32 && tmp < 127)
			std::cout << "char   : " << static_cast<char>(tmp) << std::endl;
		else
			std::cout << "char   : non displayable" << std::endl;
	}
	else
		std::cout << "char   : impossible" << std::endl;
	if (tmp < std::numeric_limits<int>::min() || tmp > std::numeric_limits<int>::max())
		std::cout << "int    : impossible" << std::endl;
	else
		std::cout << "int    : " << tmp << std::endl;
	if (tmp < std::numeric_limits<float>::min() || tmp > std::numeric_limits<float>::max())
		std::cout << "Float  : impossible" << std::endl;
	else
		std::cout << "Float  : " << static_cast<float>(tmp) << std::endl;
	if (tmp < std::numeric_limits<double>::min() || tmp > std::numeric_limits<double>::max())
		std::cout << "Double : impossible" << std::endl;
	else 
		std::cout << "Double : " << static_cast<double>(tmp) << std::endl;
}