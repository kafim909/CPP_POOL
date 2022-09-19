#include "Form.Class.hpp"

Form::Form(std::string name, int gradeToSign, int gradeToExecute) : _name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
    _isSigned = false;
	if (_gradeToExecute > 150 || _gradeToSign > 150)
		throw GradeTooLowException();
    if (_gradeToExecute < 1 || _gradeToSign < 1)
        throw GradeTooHighException();
    std::cout << "Form " << _name << " created"<< std::endl;
}

Form::Form(const Form &copy) : _name(getName()), _gradeToSign(getGradeToSign()), _gradeToExecute(getGradeToExecute())
{
    *this = copy;
}

Form &Form::operator=(const Form& op)
{
	this->_isSigned = op._isSigned;
}

Form::~Form()
{
    std::cout << "Form " << _name << " destroyed"<< std::endl;
}

Bureaucrat::GradeTooLowException::GradeTooLowException()
{
	std::cout << "FORM : Grade too low" << std::endl;
}

Bureaucrat::GradeTooHighException::GradeTooHighException()
{
	std::cout << " FORM : Grade too high" << std::endl;
}

std::string const Form::getName()
{
    return (_name);
}

bool	Form::isSigned()
{
	return (_isSigned);
}

const int Form::getGradeToSign()
{
	return (_gradeToSign);
}

const int Form::getGradeToExecute()
{
	return (_gradeToExecute);
}

void	Form::beSigned(Bureaucrat &tryingToSign)
{
	if (tryingToSign.getGrade() > _gradeToSign)
		throw GradeTooLowException();
}

std::ostream &operator<<(std::ostream &out, Form &form)
{
	out << form.getName() << " Form : " << std::endl;
	out << "Grade requested to sign the form : " << form.getGradeToSign() << std::endl;
	out << "Grade requested to execute the form : " << form.getGradeToExecute() << std::endl;
	out << "Is form signed?" << std::endl;
	if (form.isSigned())
		out << "            YES" << std::endl;
	else
		out << "            NO" << std::endl;
}