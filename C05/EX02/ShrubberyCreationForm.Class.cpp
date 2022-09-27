#include "ShrubberyCreationForm.Class.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm(target, "Shrubbery", 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : AForm(copy.getTarget() ,"Shrubbery", 145, 137)
{
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
    std::cout << executor.getName() << " is trying to execute form : " << getType() << std::endl;
    if (executor.getGrade() > getGradeToExecute())
        throw (GradeTooLowException("Grade to low to execute form"));
    std::fstream outfile;
    outfile.open(getTarget() + "_shrubbery", std::ios::out);
    if (!outfile.is_open())
    {
        std::cout << "failed to open file" << std::endl;
        return ;
    }
    outfile << "      @                 @           " << std::endl;
    outfile << "     @@@               @@@          " << std::endl;
    outfile << "    @@@@@             @@@@@         " << std::endl;
    outfile << "   @@@@@@@           @@@@@@@        " << std::endl;
    outfile << "  @@@@@@@@@         @@@@@@@@@       " << std::endl;
    outfile << "      |                 |            " << std::endl;
    outfile << "      |                 |            " << std::endl;
    outfile << "      |                 |            " << std::endl;
    outfile.close();
}
