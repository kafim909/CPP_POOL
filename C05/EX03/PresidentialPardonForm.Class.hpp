#ifndef PRESIDENTIALPARDONFORM_CLASS_HPP
# define PRESIDENTIALPARDONFORM_CLASS_HPP

# include <iostream>

# include "AForm.Class.hpp"

class PresidentialPardonForm : public AForm
{
    public:

        PresidentialPardonForm(std::string name, std::string target);
        PresidentialPardonForm(const PresidentialPardonForm&);
        PresidentialPardonForm &operator=(const PresidentialPardonForm& op);
        ~PresidentialPardonForm();

        void    execute(Bureaucrat const & executor) const;


    private:

};

#endif