#include "RobotomyRequestForm.Class.hpp"

RobotomyRequestForm::RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm(target, "RobotomyRequest", 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : AForm(copy.getTarget(), "RobotomyRequest", 72, 45)
{  
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm& op)
{
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

void   RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (!isSigned())
        throw (GradeTooLowException("Unsigned form cannot be executed"));
    std::cout << executor.getName() << " is trying to execute form : " << getType() << std::endl;
    if (executor.getGrade() > getGradeToExecute())
        throw (GradeTooLowException("Grade to low to execute form"));
    std::cout << "!!!!!!BRUITS DE PERCEUSE!!!!!!" << std::endl;
    int random = rand();
    if (random % 2)
        std::cout << "\033[33m" << getTarget() << " has been robotized succesfully!\033[0m" << std::endl;
    else
        std::cout << "\033[35mRobotized operation on " << getTarget() << " failed!\033[0m" << std::endl;
}