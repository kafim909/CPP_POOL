#ifndef AFORM_CLASS_HPP
# define AFORM_CLASS_HPP

# include <iostream>

# include "Bureaucrat.Class.hpp"

class Bureaucrat;

class AForm
{
    public:

        AForm(std::string name, std::string target, std::string type, int gradeToSign, int gradeToExecute);
        AForm(const AForm&);
        AForm &operator=(const AForm& op);
        ~AForm();

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
				GradeTooLowException(std::string message);
				virtual ~GradeTooLowException() throw();
		};

		std::string	const	getName();
		std::string const	getTarget();
		std::string const	getType();
		bool				isSigned();
		const int			getGradeToSign();
		const int			getGradeToExecute();
	
		
		void				beSigned(Bureaucrat &tryingToSign);
		void				signForm();
		virtual void  		execute(Bureaucrat const & executor) = 0;

    private:
		std::string 		_target;
		const std::string	_type;
        const std::string   _name;
        bool                _isSigned;
        const int			_gradeToSign;
        const int			_gradeToExecute;

};

std::ostream &operator<<(std::ostream &out, AForm &form);

#endif