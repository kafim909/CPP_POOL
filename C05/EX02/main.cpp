#include "Bureaucrat.Class.hpp"
#include "ShrubberyCreationForm.Class.hpp"

void    testShrubberyForm()
{
    Bureaucrat steve("steve", 150);
    ShrubberyCreationForm a24 ("a24", "Garden");

    std::cout << a24;

    try
    {
        a24.execute(steve);
    }
    catch(ShrubberyCreationForm::GradeTooLowException)
    {
        std::cout << "grade too low to execute" << std::endl;
    }


}

int main()
{
    testShrubberyForm();
}