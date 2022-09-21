#ifndef INTERN_CLASS_HPP
# define INTERN_CLASS_HPP

# pragma once
# include <iostream>
# include "AForm.Class.hpp"
# include "PresidentialPardonForm.Class.hpp"
# include "RobotomyRequestForm.Class.hpp"
# include "ShrubberyCreationForm.Class.hpp"

class Intern
{

    public:

        Intern();
        Intern(const Intern &copy);
        Intern &operator=(const Intern& op);
        ~Intern();
        AForm *makeForm(std::string formName, std::string formTarget);
        AForm *makeFormShrubberyCreation(std::string target);
        AForm *makeFormPresidentialPardon(std::string target);
        AForm *makeFormRobotomyrequest(std::string target);




    private:
        std::string forms[3];
};

#endif