#include "Bureaucrat.Class.hpp"

void    testNormalGrade()
{
    std::cout << "test normal grade" << std::endl;
    try
    {
        Bureaucrat jean("jean", 10);
        std::cout << jean << std::endl;
    }
    catch(Bureaucrat::GradeTooHighException)
    {
    }
    catch(Bureaucrat::GradeTooLowException)
    {
    }
    std::cout << std::endl;
}

void    testGradeTooHigh()
{
    std::cout << "test Grade Too High" << std::endl;
    try
    {
        Bureaucrat chris("Chris", 0);
        std::cout << chris << std::endl;
    }
    catch(Bureaucrat::GradeTooHighException)
    {
    }
    catch(Bureaucrat::GradeTooLowException)
    {
    }
    std::cout << std::endl;
}

void    testGradeTooLow()
{
    std::cout << "test grade too low" << std::endl;
    try
    {
        Bureaucrat max("max", 155);
        std::cout << max << std::endl;
    }
    catch(Bureaucrat::GradeTooHighException)
    {
    }
    catch(Bureaucrat::GradeTooLowException)
    {
    }
    std::cout << std::endl;
}

void    testIncrement()
{
    std::cout << "test increment" << std::endl;
    Bureaucrat yves("yves", 1);
    std::cout << yves << std::endl;
    try
    {
        std::cout << "trying increment" << std::endl;
        yves.increment();
    }
    catch(Bureaucrat::GradeTooHighException)
    {
    }
    catch(Bureaucrat::GradeTooLowException)
    {
    }
    std::cout << std::endl;
}

void    testDecrement()
{
    std::cout << "test decrement" << std::endl;
    Bureaucrat Carl("Carl", 150);
    std::cout << Carl << std::endl;
    try
    {
        std::cout << "trying decrement" << std::endl;
        Carl.decrement();
    }
    catch(Bureaucrat::GradeTooHighException)
    {
    }
    catch(Bureaucrat::GradeTooLowException)
    {
    }
    std::cout << std::endl;
}


int main()
{
    testNormalGrade();
    testGradeTooHigh();
    testGradeTooLow();
    testIncrement();
    testDecrement();
}