#ifndef FORM_CLASS_HPP
# define FORM_CLASS_HPP

# include <iostream>
# include "Bureaucrat.Class.hpp"



class Form
{
    public:

        Form(std::string name, int gradeToSign, int gradeToExecute);
        Form(const Form&);
        Form &operator=(const Form& op);
        ~Form();

		class GradeTooHighException : public std::exception
		{
			public :
				GradeTooHighException();
				virtual ~GradeTooHighException() throw();	
		};
		class GradeTooLowException : public std::exception
		{
			public :
				GradeTooLowException();
				virtual ~GradeTooLowException() throw();
		};

		std::string	const	getName();
		bool				isSigned();
		const int			getGradeToSign();
		const int			getGradeToExecute();
		
		void				beSigned(Bureaucrat &tryingToSign);
		void				signForm();


    private:
        const std::string   _name;
        bool                _isSigned;
        const int			_gradeToSign;
        const int			_gradeToExecute;

};

std::ostream &operator<<(std::ostream &out, Form &form);

#endif