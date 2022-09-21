#include "AForm.Class.hpp"

AForm::AForm() : _gradeToExecute(0), _gradeToSign(0)
{
}

AForm::AForm(std::string name, std::string target, std::string type, int gradeToSign, int gradeToExecute) : _name(name), _target(target), _type(type), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
    _isSigned = false;
	if (_gradeToExecute > 150 || _gradeToSign > 150)
		throw GradeTooLowException();
    if (_gradeToExecute < 1 || _gradeToSign < 1)
        throw GradeTooHighException();
}

AForm::AForm(const AForm &copy) : _name(getName()), _gradeToSign(getGradeToSign()), _gradeToExecute(getGradeToExecute())
{
    *this = copy;
}

AForm &AForm::operator=(const AForm& op)
{
	this->_isSigned = op._isSigned;
	return (*this);
}

AForm::~AForm()
{
}

AForm::GradeTooLowException::GradeTooLowException()
{
}

AForm::GradeTooLowException::GradeTooLowException(std::string message)
{
	std::cout << message << std::endl;
}

AForm::GradeTooLowException::~GradeTooLowException() throw()
{
}

AForm::GradeTooHighException::GradeTooHighException()
{
}

AForm::GradeTooHighException::~GradeTooHighException() throw()
{
}

std::string const AForm::getName() const
{
    return (_name);
}

std::string const AForm::getTarget() const
{
	return (_target);
}

bool	AForm::isSigned() const
{
	return (_isSigned);
}

const int AForm::getGradeToSign() const
{
	return (_gradeToSign);
}

std::string const AForm::getType() const
{
	return (_type);
}

const int AForm::getGradeToExecute() const
{
	return (_gradeToExecute);
}

void	AForm::beSigned(Bureaucrat &tryingToSign)
{
	if (tryingToSign.getGrade() > _gradeToSign)
		throw GradeTooLowException();
	_isSigned = true;
}

std::ostream &operator<<(std::ostream &out, AForm &form)
{
	out << std::endl << "\033[32m" << form.getName() << " Form, of type " << form.getType() << " : " << std::endl;
	out << "Grade requested to sign the form : " << form.getGradeToSign() << std::endl;
	out << "Grade requested to execute the form : " << form.getGradeToExecute() << std::endl;
	out << "Is form signed?" << std::endl;
	if (form.isSigned())
		out << "               YES" << std::endl;
	else
		out << "               NO" << std::endl;
	out << "\033[0m" << std::endl;
	return (out);
}