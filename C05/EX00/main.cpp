#include "Bureaucrat.Class.hpp"

int main()
{
    try
    {
        Bureaucrat jean = Bureaucrat("jean", 10);
        Bureaucrat yves = Bureaucrat("yves", 155);
        Bureaucrat steve = Bureaucrat("steve", 0);
    }
    catch(int i)
    {
        std::cerr << "coucou" << std::endl;
    }
    
}