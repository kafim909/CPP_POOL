#include "seekAndReplace.Class.hpp"

void seekAndReplace::errorMessage(std::string message)
{
    std::cerr << "\033[1;31mError : \033[0m" << message << std::endl;
    exit(1);
}

void seekAndReplace::initInFile(void)
{
    this->inFile.open(this->fileName);
    if (this->inFile.fail())
        errorMessage("Failed to open input filestream");
}

void seekAndReplace::initOutFile(void)
{
    this->outFile.open(this->fileName, std::ofstream::out | std::ofstream::trunc);
    if (this->outFile.fail())
        errorMessage("Failed to open output filestream");
}

void seekAndReplace::getText(void)
{
    int i;

    i = 0;
    this->count = 0;
    while (!this->inFile.eof())
    {
        this->inFile >> this->line;
        this->count++;
    }
    this->text = new std::string[count];
    this->inFile.seekg(0);
    while (std::getline (this->inFile,this->text[i]))
        i++;
    count =i;
}

void seekAndReplace::replaceOp(void)
{
    int i;

    i = -1;
    while(++i < this->count)
        if (!this->text[i].compare(this->seek))
            this->text[i] = this->replace;
}

void seekAndReplace::putTextToFile(void)
{
    int i;

    i = -1;
    while (++i < this->count)
    {
        this->outFile << this->text[i];
        if (i < this->count - 1)
            this->outFile << std::endl;
    }
}

void seekAndReplace::closeAndDelete(void)
{
    this->inFile.close();
    this->outFile.close();
    delete[] text;
}

void seekAndReplace::parser(char **args)
{
    this->fileName = args[1];
    this->seek = args[2];
    this->replace = args[3];
    if (!this->fileName.size() || !this->seek.size() || !this->replace.size())
        errorMessage("One of the input strings is empty");
}



seekAndReplace::seekAndReplace()
{
    std::cout << "Operating class constructed" << std::endl;
}

seekAndReplace::~seekAndReplace()
{
    std::cout << "Operating class destroyed" << std::endl;
}