#ifndef ROBOTOMYREQUESTFORM_CLASS_HPP
# define ROBOTOMYREQUESTFORM_CLASS_HPP

# include <iostream>

# include "AForm.Class.hpp"

class RobotomyRequestForm : public AForm
{
    public:

        RobotomyRequestForm(std::string name, std::string target);
        RobotomyRequestForm(const RobotomyRequestForm&);
        RobotomyRequestForm &operator=(const RobotomyRequestForm& op);
        ~RobotomyRequestForm();

        void    execute(Bureaucrat const & executor);

    private:


};

#endif