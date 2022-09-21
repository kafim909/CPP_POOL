#include "Intern.Class.hpp"

Intern::Intern()
{
    forms[0] = "shrubbery creation";
    forms[1] = "robotomy request";
    forms[2] = "presidential pardon";
}

Intern::Intern(const Intern &copy)
{
    *this = copy;
}

Intern &Intern::operator=(const Intern& op)
{
    return (*this);
}

Intern::~Intern()
{
}

AForm *Intern::makeForm(std::string formName, std::string formTarget)
{
    int i;
    i = -1;

    while (++i < 3)
        if (!forms[i].compare(formName))
            break;
    switch (i)
    {
        case (0) :
            return (makeFormShrubberyCreation(formTarget));
        case (1) :
            return (makeFormRobotomyrequest(formTarget));
        case (2) :
            return (makeFormPresidentialPardon(formTarget));
    }
    std::cout << "Form : " << formName << " does not exist" << std::endl;
    return (NULL);
}

AForm *Intern::makeFormShrubberyCreation(std::string target)
{
    std::cout << "\033[1m\033[34m Intern is creating a Shrubbery form\033[0m" << std::endl;
    return (new ShrubberyCreationForm("shrubbery", target));
}

AForm *Intern::makeFormRobotomyrequest(std::string target)
{
    std::cout << "\033[1m\033[34m Intern is creating a Robotomy Request form\033[0m" << std::endl;
    return (new RobotomyRequestForm("robotomy request", target));
}

AForm *Intern::makeFormPresidentialPardon(std::string target)
{
    std::cout << "\033[1m\033[34m Intern is creating a Presidential Pardon form\033[0m" << std::endl;
    return (new PresidentialPardonForm("presidential pardon", target));
}
