#include "Ice.Class.hpp"

Ice::Ice()
{
    _type = "ice";
    std::cout << "Ice materia created" << std::endl;
}

Ice::Ice(const Ice &copy)
{
    *this = copy;
}

Ice &Ice::operator=(const Ice& op)
{
    _type = op._type;
    return (*this);
}

Ice::~Ice()
{
    std::cout << "Ice materia consumed" << std::endl;
}

AMateria *Ice::clone() const
{
    Ice *ice= new Ice;
    return (ice);
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << "*" << std::endl;
}