#include "Bureaucrat.Class.hpp"
#include "Form.Class.hpp"


void    formBasicUnitTest()
{
    std::cout << "\033[1;31mFORM CLASS : Basic unit test.....\033[0m" << std::endl;
    try
    {
        Form formGradeTooHigh("formGradeTooHigh", 0, 0);        
    }
    catch(Form::GradeTooHighException)
    {
        std::cout << "Failed to construct object, grade too high" << std::endl;
    }
    catch(Form::GradeTooLowException)
    {
        std::cout << "Failed to construct object, grade too low" << std::endl;
    }
    try
    {
        Form formGradeTooLow("formGradeTooLow", 151, 151);        
    }
        catch(Form::GradeTooHighException)
    {
        std::cout << "Failed to construct object, grade too high" << std::endl;
    }
    catch(Form::GradeTooLowException)
    {
        std::cout << "Failed to construct object, grade too low" << std::endl;
    }

    Form BasicUnitTest("BasicUnitTest", 45, 18);
    std::cout << BasicUnitTest << std::endl;
}

void    testBureaucratFailedToSign(Bureaucrat &steve, Form &article1)
{
    std::cout << "\033[1;31mBUREAUCRAT : Grade too low to sign test.....\033[0m" << std::endl;
    try
    {
        article1.beSigned(steve);
    }
    catch(Form::GradeTooLowException)
    {
        std::cout << "Grade too low to sign form" << std::endl;
    }
    steve.signForm(article1);
}

void    testBureaucratSuccessToSign(Bureaucrat &steve, Form &article1)
{
    std::cout << "\033[1;31mBUREAUCRAT : Grade good to sign test.....\033[0m" << std::endl;
    std::cout << steve << article1;
    try
    {
        article1.beSigned(steve);
    }
    catch(Form::GradeTooLowException)
    {
        std::cout << "Grade to low to sign form" << std::endl;
    }
    steve.signForm(article1);
    std::cout << article1;
}

void    testDeepCopy()
{
    std::cout << "\033[1;31mForm : Deep copy test.....\033[0m" << std::endl;
    Form test("test", 20, 20);
    Form test1(test);
    std::cout << test;
    std::cout << test1;
}

int main()
{
    formBasicUnitTest();
    Bureaucrat steve("steve", 100);
    Form article1("article1",99, 20);
    testBureaucratFailedToSign(steve, article1);
    steve.increment();
    testBureaucratSuccessToSign(steve, article1);
    testDeepCopy();
}