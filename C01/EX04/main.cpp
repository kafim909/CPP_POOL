#include "seekAndReplace.Class.hpp"


void errorMessage(std::string message)
{
	std::cerr << message << std::endl;
	exit(1);
}

int main(int argc, char **argv)
{

	if (argc != 4)
        return (errorMessage("Wrong number of argments"), 1);
	seekAndReplace sANDr;
	sANDr.parser(argv);
	sANDr.initInFile();
	sANDr.getText();
	sANDr.replaceOp();
	sANDr.initOutFile();
	sANDr.putTextToFile();
	sANDr.closeAndDelete();
	return (0);  
}