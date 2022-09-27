#include "PresidentialPardonForm.Class.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm(target, "PresidentialPardon", 25, 5)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) : AForm(copy.getTarget(), "PresidentialPardon", 25, 5)
{
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm& op)
{
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

void   PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (!isSigned())
        throw (GradeTooLowException("Unsigned form cannot be executed"));
    std::cout << executor.getName() << " is trying to execute form : " << getType() << std::endl;
    if (executor.getGrade() > getGradeToExecute())
        throw (GradeTooLowException("Grade too low to execute form"));
    std::cout << getTarget() << " has been forgiven by Zaphod Beeblebrox" << std::endl;
}