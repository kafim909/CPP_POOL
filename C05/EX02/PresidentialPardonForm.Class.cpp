#include "PresidentialPardonForm.Class.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string name, std::string target) : AForm(name, target, "PresidentialPardon", 25, 5)
{
    std::cout << "PresidentialPardonForm constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) : AForm(getName(), getTarget(), "PresidentialPardon", 25, 5)
{
    *this = copy;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm& op)
{
    *this = op;
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

