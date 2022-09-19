#include "Bureaucrat.Class.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
    if (_grade > 150)
        throw GradeTooLowException();
    if (_grade < 1)
        throw GradeTooHighException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy)
{
    *this = copy;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat& op)
{
    this->_name = op._name;
    this->_grade = op._grade;
    return (*this);
}

Bureaucrat::~Bureaucrat()
{
    std::cout << _name << " destructor called" << std::endl;
}

std::string Bureaucrat::getName() const
{
    return (_name);
}

int Bureaucrat::getGrade()
{
    return (_grade);
}

Bureaucrat::GradeTooLowException::GradeTooLowException()
{
	std::cout << "Error, grade too low for bureaucrat" << std::endl;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw() 
{
}

Bureaucrat::GradeTooHighException::GradeTooHighException()
{
	std::cout << "Error, grade too high for bureaucrat" << std::endl;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw() 
{
}

std::ostream &operator<<(std::ostream &lhs, Bureaucrat &rhs)
{
	lhs << "Bureaucrat " << rhs.getName() << " of grade " << rhs.getGrade() << std::endl;
	return (lhs);
}

void    Bureaucrat::increment()
{
        _grade--;
        if (_grade < 1)
            throw GradeTooHighException();
}

void    Bureaucrat::decrement()
{
        _grade++;
        if (_grade > 150)
            throw GradeTooLowException();
}

void   Bureaucrat::signForm(Form &form)
{
    if (form.isSigned())
        std::cout << *this << " signed " << form.getName() << std::endl;
    else
        std::cout << *this << "couldn't sign " << form.getName() << "because his grade is to low" << std::endl;
}