#ifndef FORM_CLASS_HPP
# define FORM_CLASS_HPP

# pragma once
# include <iostream>

class Form
{

    public:

        Form();
        Form(const Form&);
        Form &operator=(const Form& op);
        ~Form();

    private:

};

#endif