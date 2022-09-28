#include "Base.Class.hpp"
#include "C.Class.hpp"
#include "B.Class.hpp"
#include "A.Class.hpp"
#include "random"

void	tryA(Base *p)
{
	try 
	{
		A &a1 = dynamic_cast<A&>(*p);
		std::cout << GREEN << "A is the right Class" << RESET << std::endl;
	}
	catch (std::bad_cast)
	{
		std::cout << YELLOW << "NOT CLASS A" << std::endl;
	}
}

void	tryB(Base *p)
{
	try 
	{
		B &b1 = dynamic_cast<B&>(*p);
		std::cout << GREEN << "B is the right Class" << RESET << std::endl;
	}
	catch (std::bad_cast)
	{
		std::cout << YELLOW << "NOT CLASS B" << std::endl;
	}
}

void	tryC(Base *p)
{
	try 
	{
		C &c1 = dynamic_cast<C&>(*p);
		std::cout << GREEN << "C is the right Class" << RESET << std::endl;
	}
	catch (std::bad_cast)
	{
		std::cout << YELLOW << "NOT CLASS C" << std::endl;
	}
}

void	tryA(Base &p)
{
	try 
	{
		A &a1 = dynamic_cast<A&>(p);
		std::cout << GREEN << "A is the right Class" << RESET << std::endl;
	}
	catch (std::bad_cast)
	{
		std::cout << YELLOW << "NOT CLASS A" << std::endl;
	}
}

void	tryB(Base &p)
{
	try 
	{
		B &b1 = dynamic_cast<B&>(p);
		std::cout << GREEN << "B is the right Class" << RESET << std::endl;
	}
	catch (std::bad_cast)
	{
		std::cout << YELLOW << "NOT CLASS B" << std::endl;
	}
}

void	tryC(Base &p)
{
	try 
	{
		C &c1 = dynamic_cast<C&>(p);
		std::cout << GREEN << "C is the right Class" << RESET << std::endl;
	}
	catch (std::bad_cast)
	{
		std::cout << YELLOW << "NOT CLASS C" << std::endl;
	}
}

void identify(Base* p)
{
	std::cout << BLUE <<"POINTER FUNCTION" << RESET << std::endl;
	tryA(p);
	tryB(p);
	tryC(p);
}

void identify(Base& p)
{
	std::cout << BLUE <<"REFERENCE FUNCTION" << RESET << std::endl;	
	tryA(p);
	tryB(p);
	tryC(p);
}

Base *generate(void)
{
	srand(time(0));
	int random = rand()%3;
	std::cout << RED << "RANDOM NUMBER : "<< random << RESET << std::endl << std::endl;
	switch (random)
	{
		case(0) : 
			return (new A);
		case(1) :
			return (new B);
		case(2) :
			return (new C);
	}
	return (NULL);
}

int main()
{
	std::cout << std::endl;
	Base *ptr;
	ptr = generate();
	identify(ptr);
	identify(*ptr);
	delete ptr;
	std::cout << std::endl;
}