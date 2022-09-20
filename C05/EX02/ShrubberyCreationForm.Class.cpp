#include "ShrubberyCreationForm.Class.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string name, std::string target) : AForm(name, target, "Shrubbery", 145, 137)
{
    std::cout << "Shrubbery Form : " << name << " created" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : AForm(getName() ,getTarget() ,"Shrubbery", 145, 137)
{
    *this = copy;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm& op)
{
    *this = op;
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "Shrubbery Form : " << getName() << " destroyed" << std::endl;
}

void   ShrubberyCreationForm::execute(Bureaucrat const & executor)
{
    if (!isSigned())
        throw (GradeTooLowException("Unsigned form cannot be executed"));
    if (executor.getGrade() > getGradeToExecute())
        throw (GradeTooLowException());
    std::ofstream outfile(getTarget() + "_shrubbery");
    outfile << "      @                 @           " << std::endl;
    outfile << "     @@@               @@@          " << std::endl;
    outfile << "    @@@@@             @@@@@         " << std::endl;
    outfile << "   @@@@@@@           @@@@@@@        " << std::endl;
    outfile << "  @@@@@@@@@         @@@@@@@@@       " << std::endl;
    outfile << "      |                 |            " << std::endl;
    outfile << "      |                 |            " << std::endl;
    outfile << "      |                 |            " << std::endl;
}

std::ostream &operator<<(std::ostream &out, ShrubberyCreationForm &form)
{
    std::cout << form;
    return (out);
}