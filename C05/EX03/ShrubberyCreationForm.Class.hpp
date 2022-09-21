#ifndef SHRUBBERYCREATIONFORM_CLASS_HPP
# define SHRUBBERYCREATIONFORM_CLASS_HPP


# include <iostream>
# include <fstream>

# include "AForm.Class.hpp"

class ShrubberyCreationForm : public AForm
{
    public:

        ShrubberyCreationForm(std::string name, std::string target);
        ShrubberyCreationForm(const ShrubberyCreationForm&);
        ShrubberyCreationForm &operator=(const ShrubberyCreationForm& op);
        ~ShrubberyCreationForm();
        
        void    execute(Bureaucrat const & executor) const;

    private:

};


#endif