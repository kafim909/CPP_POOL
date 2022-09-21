#include "ShrubberyCreationForm.Class.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string name, std::string target) : AForm(name, target, "Shrubbery", 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : AForm(copy.getName() ,copy.getTarget() ,"Shrubbery", 145, 137)
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
}

void   ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (!isSigned())
        throw (GradeTooLowException("Unsigned form cannot be executed"));
    std::cout << executor.getName() << " is trying to execute form : " << getName() << std::endl;
    if (executor.getGrade() > getGradeToExecute())
        throw (GradeTooLowException("Grade to low to execute form"));
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
