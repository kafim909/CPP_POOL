#include "PresidentialPardonForm.Class.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string name, std::string target) : AForm(name, target, "PresidentialPardon", 25, 5)
{
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
}

void   PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (!isSigned())
        throw (GradeTooLowException("Unsigned form cannot be executed"));
    std::cout << executor.getName() << " is trying to execute form : " << getName() << std::endl;
    if (executor.getGrade() > getGradeToExecute())
        throw (GradeTooLowException("Grade too low to execute form"));
    std::cout << getTarget() << " has been forgiven by Zaphod Beeblebrox" << std::endl;
}