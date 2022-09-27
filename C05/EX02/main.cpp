#include "Bureaucrat.Class.hpp"
#include "ShrubberyCreationForm.Class.hpp"
#include "PresidentialPardonForm.Class.hpp"
#include "RobotomyRequestForm.Class.hpp"

void    testShruberryForm()
{
    Bureaucrat lowLevel("lowLevel", 145);
    Bureaucrat midLevel("midLevel", 72);
    Bureaucrat highLevel("highLevel", 1);

    ShrubberyCreationForm shrubbery1 ("Garden1");
    ShrubberyCreationForm shrubbery2 ("Garden2");
    ShrubberyCreationForm shrubbery3 ("Garden3");

    std::cout << shrubbery1 << lowLevel;
    lowLevel.signForm(shrubbery1);
    lowLevel.executeForm(shrubbery1);
    std::cout << shrubbery2 << midLevel;    
    midLevel.signForm(shrubbery2);
    midLevel.executeForm(shrubbery2);
    std::cout << shrubbery3 << highLevel;        
    highLevel.signForm(shrubbery3);
    highLevel.executeForm(shrubbery3);
}

void    testRobotomyform()
{
    Bureaucrat lowLevel("lowLevel", 145);
    Bureaucrat midLevel("midLevel", 72);
    Bureaucrat highLevel("highLevel", 1);

    RobotomyRequestForm robotomy1 ("robot1");
    RobotomyRequestForm robotomy2 ("robot2");
    RobotomyRequestForm robotomy3 ("robot3");

    std::cout << robotomy1 << lowLevel;
    lowLevel.signForm(robotomy1);
    lowLevel.executeForm(robotomy1);
    std::cout << robotomy2 << midLevel;    
    midLevel.signForm(robotomy2);
    midLevel.executeForm(robotomy2);
    std::cout << robotomy3 << highLevel; 
    highLevel.signForm(robotomy3);
    highLevel.executeForm(robotomy3);
}

void    testPresidentialPardonForm()
{
    Bureaucrat lowLevel("lowLevel", 145);
    Bureaucrat midLevel("midLevel", 72);
    Bureaucrat highLevel("highLevel", 1);

    PresidentialPardonForm pardon1 ("thief1");
    PresidentialPardonForm pardon2 ("thief2");
    PresidentialPardonForm pardon3 ("thief3");

    std::cout << pardon1 << lowLevel;    
    lowLevel.signForm(pardon1);
    lowLevel.executeForm(pardon1);
    std::cout << pardon2 << midLevel;    
    midLevel.signForm(pardon2);
    midLevel.executeForm(pardon2);
    std::cout << pardon3 << highLevel;    
    highLevel.signForm(pardon3);
    highLevel.executeForm(pardon3);
}

void    testOneOnTworobotomyform()
{
    std::cout << "\033[34mBureaucrat grade = 1, enough to sign and execute the Robotomy Request Form" << std::endl << "Launching 50x sign and execute\033[0m" << std::endl << std::endl;
    for (int i = 0; i < 50; i++)
    {
        Bureaucrat test("Bureaucrat test", 1);
        RobotomyRequestForm testForm("robot");
        test.signForm(testForm);
        test.executeForm(testForm);
        test.~Bureaucrat();
        testForm.~RobotomyRequestForm();
    }

}

void	testDeepCopy()
{
	RobotomyRequestForm testR("target1");
	RobotomyRequestForm testR2(testR);
	std::cout << testR;
	std::cout << testR2;
	ShrubberyCreationForm testSh("Target1");
	ShrubberyCreationForm testSh2(testSh);
	std::cout << testSh;
	std::cout << testSh2;
	PresidentialPardonForm testPresi("target1");
	PresidentialPardonForm testPresi2(testPresi);
	std::cout << testPresi;
	std::cout << testPresi2;
	Bureaucrat max("max", 50);
	Bureaucrat jean(max);
	std::cout << max;
	std::cout << jean;
	max.decrement();
	jean.decrement();
	jean.decrement();
	std::cout << max;
	std::cout << jean;
}

int main()
{
    std::cout << "\033[1;31mBEGIN test Shrubbery Form.....\033[0m" << std::endl;
    testShruberryForm();
    std::cout << "\033[1;31mEND test Shrubbery Form.....\033[0m" << std::endl << std::endl ;

    std::cout << "\033[1;31mBEGIN test robotomy Form.....\033[0m" << std::endl;
    testRobotomyform();
    std::cout << "\033[1;31mEND test robotomy Form.....\033[0m" << std::endl << std::endl ;

    std::cout << "\033[1;31mBEGIN test pardon Form.....\033[0m" << std::endl;
    testPresidentialPardonForm();
    std::cout <<  "\033[1;31mEND test pardon Form.....\033[0m" << std::endl << std::endl ;

    std::cout << std::endl <<"\033[1;31mBEGIN test robotomy request form probability.....\033[0m" << std::endl;
    testOneOnTworobotomyform();
    std::cout <<"\033[1;31mEND test robotomy request form probability.....\033[0m" << std::endl;

    std::cout << std::endl <<"\033[1;31mBEGIN test deep copy.....\033[0m" << std::endl;
    testDeepCopy();
    std::cout <<"\033[1;31mEND test deep copy.....\033[0m" << std::endl;
}