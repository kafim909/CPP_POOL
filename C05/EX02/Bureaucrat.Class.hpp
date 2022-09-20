#ifndef BUREAUCRAT_CLASS_HPP
# define BUREAUCRAT_CLASS_HPP

# include <iostream>
# include <exception>
# include <string>

# include "AForm.Class.hpp"

class AForm;

class Bureaucrat
{
    public:

        Bureaucrat(std::string name, int grade);
        Bureaucrat(const Bureaucrat&);
        Bureaucrat &operator=(const Bureaucrat& op);
        ~Bureaucrat();

        std::string     getName() const;
        const int       getGrade() const;
        void            increment();
        void            decrement();
        void            signForm(AForm &Aform);

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