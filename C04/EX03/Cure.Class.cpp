#include "Cure.Class.hpp"

Cure::Cure()
{
    _type = "cure";
    std::cout << "Cure materia created" << std::endl;
}



Cure::Cure(const Cure &copy)
{
    *this = copy;
}

Cure &Cure::operator=(const Cure& op)
{
    _type = op._type;
    return (*this);
}

Cure::~Cure()
{
    std::cout << "Cure materia consumed" << std::endl;
}

AMateria *Cure::clone() const
{
    Cure *cure = new Cure;
    return (cure);
}


void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "’s wounds " << std::endl;
}