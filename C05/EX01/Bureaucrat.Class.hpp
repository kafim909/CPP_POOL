#ifndef BUREAUCRAT_CLASS_HPP
# define BUREAUCRAT_CLASS_HPP

# include <iostream>
# include <exception>
# include <string>
# include "Form.Class.hpp"

class Bureaucrat
{
    public:

        Bureaucrat(std::string name, int grade);
        Bureaucrat(const Bureaucrat&);
        Bureaucrat &operator=(const Bureaucrat& op);
        ~Bureaucrat();

        std::string     getName() const;
        int             getGrade();
        void            increment();
        void            decrement();
        void            signForm(Form &form);

        class GradeTooHighException : public std::exception
        {
            public:
                GradeTooHighException();
                virtual ~GradeTooHighException() throw();
        };

        class GradeTooLowException : public std::exception
        {
            public:
                GradeTooLowException();
                virtual ~GradeTooLowException() throw();
        };


    private:
        std::string _name;
        int         _grade;

};
std::ostream &operator<<(std::ostream &lhs, Bureaucrat &rhs);   

#endif