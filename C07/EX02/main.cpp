#include "Array.Class.hpp"
#define MAX_VAL 750

void	print(std::string color, std::string msg, bool endline)
{
	std::cout << color << msg << RESET << std::endl;
	if (endline)
		std::cout << std::endl;
}

void	testExceptionIndex()
{
	print(YELLOW, "===========TEST INDEX EXCEPTION=============", 1);
	print(BLUE, "Empty Array :", 0);{
		Array <>tab1;
		try{
			tab1[4] = 0;
		}
		catch(errorIndex &e){
			e.what();
		}
	}
	print(BLUE, "Array of 4:", 0);{
		Array <>tab1(4);
		try{
			tab1[4] = 0;
		}
		catch(errorIndex &e){
			e.what();
		}
	}
	print(BLUE, "Array of 4, negative index:", 0);{
		Array <>tab1(4);
		try{
			tab1[-54] = 0;
		}
		catch(errorIndex &e){
			e.what();
		}
	}
	print(BLUE, "Array of 1000, one index too high:", 0);{
		Array <>tab1(1000);
		try{
			tab1[1000] = 0;
		}
		catch(errorIndex &e){
			e.what();
		}
	}
	std::cout << std::endl;
}

void testDifferentTypes()
{
	print(YELLOW, "===========TEST DIFFERENT TYPES=============", 1);
	print(BLUE, "Int array of 4:", 0);{
		Array <>tab1(4);
		tab1[0] = 1;
		tab1[1] = 2;
		tab1[2] = 3;
		tab1[3] = 4;
		std::cout << tab1 << std::endl;
	}
	print(BLUE, "String array of 4:", 0);{
		Array <std::string>tab1(4);
		tab1[0] = "coucou";
		tab1[1] = "comment";
		tab1[2] = "ça";
		tab1[3] = "va?";
		std::cout << tab1 << std::endl;
	}
	print(BLUE, "Float array of 4:", 0);{
		Array <float>tab1(4);
		tab1[0] = 456.245;
		tab1[1] = 564564.95;
		tab1[2] = 784.004;
		tab1[3] = 856.456;
		std::cout << tab1 << std::endl;
	}
}

void	testAssignationCopy()
{
	print(YELLOW, "===========TEST ASSIGNATION COPY=============", 1);
	Array <>tab1(4);
	tab1[0] = 1;
	tab1[1] = 2;
	tab1[2] = 3;
	tab1[3] = 4;
	Array <>tab2(6);
	tab2[0] = 50;
	tab2[1] = 60;
	tab2[2] = 70;
	tab2[3] = 90;
	tab2[4] = 100;
	tab2[5] = 110;
	print(BLUE, "Int array1:", 0);
	std::cout << tab1 << std::endl;
	print(BLUE, "Int array2:", 0);
	std::cout << tab2 << std::endl;
	print(MAGENTA, "-----------array2 = array 1-----------", 0);
	tab2 = tab1;
	print(BLUE, "array2 :", 0);
	std::cout << tab2 << std::endl;
	print(MAGENTA, "-----------modifying and print array2, should not modify array1 :-----------", 0);
	tab2[0] = 50;
	tab2[1] = 60;
	print(BLUE, "Int array1:", 0);
	std::cout << tab1 << std::endl;
	print(BLUE, "Int array2:", 0);
	std::cout << tab2 << std::endl;
	std::cout << std::endl;
}

void	testCopyConstructor()
{
	print(YELLOW, "===========TEST COPY CONSTRUCTOR=============", 1);
	Array <>tab1(4);
	tab1[0] = 1;
	tab1[1] = 2;
	tab1[2] = 3;
	tab1[3] = 4;
	Array <>tab2(tab1);
	print(BLUE, "Int array1:", 0);
	std::cout << tab1 << std::endl;	
	print(BLUE, "Int array2:", 0);
	std::cout << tab2 << std::endl;
}

int	main42()
{
	Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << "coucou " << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << "coucou 2 " << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;
	return (0);
}

int main()
{

	// main42();

	testExceptionIndex();
	testDifferentTypes();
	testAssignationCopy();
	testCopyConstructor();
	}