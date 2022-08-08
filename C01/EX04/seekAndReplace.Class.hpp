#ifndef SEEKANDREPLACE_CLASS_HPP
# define SEEKANDREPLACE_CLASS_HPP

# pragma once
# include <iostream>
# include <string>
# include <fstream>

class seekAndReplace
{
    public:
        seekAndReplace();
        ~seekAndReplace();
        void    errorMessage(std::string message);
        void    parser(char **args);
        void    initInFile(void);
        void    getText(void);
        void    replaceOp(void);
        void    initOutFile(void);
        void    putTextToFile(void);
        void    closeAndDelete(void);

    private:
        char        **args;
        int         count;
        std::string fileName;
        std::string seek;
        std::string replace;
        std::string line;
        std::string *text;
        std::ifstream inFile;
        std::ofstream outFile;

};

#endif