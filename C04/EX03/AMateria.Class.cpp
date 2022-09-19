#include "AMateria.Class.hpp"

AMateria::AMateria()
{
}

AMateria::AMateria(std::string const &type) : _type(type)
{
}

AMateria::AMateria(const AMateria &copy)
{
    *this = copy;
}

AMateria::~AMateria()
{
}

std::string const &AMateria::getType() const
{
    return (_type);
}

void AMateria::use(ICharacter& target)
{
    (void)target;
}