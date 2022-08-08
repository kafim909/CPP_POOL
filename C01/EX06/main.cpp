#include "Harl.Class.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cerr << "Error : Wrong number of arguments" << std::endl;
        exit(1);
    }
    Harl harl;
    std::string level = argv[1];

    harl.complain(level);
}
