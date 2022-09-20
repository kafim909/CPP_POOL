#include "RobotomyRequestForm.Class.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string name, std::string target) : AForm(name, target, "RobotomyRequest", 72, 45)
{
    std::cout << "RobotomyRequestForm constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : AForm(getName(), getTarget(), "RobotomyRequest", 72, 45)
{
    *this = copy;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm& op)
{
    *this = op;
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

void   RobotomyRequestForm::execute(Bureaucrat const & executor)
{
}