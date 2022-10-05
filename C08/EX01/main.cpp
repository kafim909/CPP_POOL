#include "Span.Class.hpp"

void fillVector(Span &span, const int n)
{
    for (int i = 0; i < n; i++)
        span.addNumber(rand() % (n * 100));
}

void unitTest(const unsigned int sizeSpan, const unsigned int fillSpan, bool bunch)
{
    std::cout << YELLOW << "TEST " << sizeSpan <<  " max vector, filled with " << fillSpan << "n" << RESET << std::endl;
    Span span(sizeSpan);
    if (bunch)
    {
        try {span.addBunch(fillSpan);}
        catch (Span::exceedSize &e) {e.what();}
    }
    else
    {
        try {fillVector(span, fillSpan);}
        catch (Span::exceedSize &e) {e.what();}
    }
    if (sizeSpan <= 10)
    {
        std::cout << BLUE << "Print elements : ";
        span.printElements();

    }
    std::cout << RESET << std::endl;
    try {std::cout << MAGENTA << "Span longest span : " << span.longestSpan() << RESET <<std::endl;}
    catch (Span::noElem &e){e.what();}
    try {std::cout << MAGENTA << "Span shortest span : " << span.shortestSpan() << RESET << std::endl;}
    catch (Span::noElem &e){e.what();}
    std::cout << std::endl;
}

void    testDeepCopy()
{
    Span vect1(5);
    vect1.addBunch(5);
    std::cout  << std::endl << YELLOW << "TEST DEEP COPY" << RESET << std::endl;
    std::cout << BLUE << "Print elements of vector to copy : ";
    vect1.printElements();
    std::cout << std::endl;
    Span vect2(vect1);
    std::cout << BLUE << "Print elements of copied vector : ";
    vect2.printElements();
    std::cout << std::endl;
}

void    main42()
{
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
}

int main()
{   
    while (1)
    {
        int choice;
        std::cout << std::endl << YELLOW << "=========SPAN UNIT TESTS:==========" << GREEN << std::endl << std::endl; 
        std::cout << "1. Vector size 10 with AddNumber fct" << std::endl; 
        std::cout << "2. Vector size 500 AddNumber fct" << std::endl; 
        std::cout << "3. Vector size 10000 AddNumber fct" << std::endl;
        std::cout << "4. Vector size 50000 AddNumber fct" << std::endl;
        std::cout << "5. Vectors tests with Addbunch fct" << std::endl;
        std::cout << "6. Deep Copy test" << std::endl;
        std::cout << "7. 42 Subject test" << std::endl;
        std::cout << "Make you choice : " << RESET;
        std::cin >> choice;
        switch (choice)
        {
            case (1) :
            {
                for (int i = 0; i < 15; i++)
                    unitTest(rand() % 10, rand () % 10, 0);
                break ;
            }
            case (2) :
            {
                for (int i = 0; i < 15; i++)
                    unitTest(rand() % 500, rand () % 500, 0);
                break ;
            }
            case (3) :
            {
                for (int i = 0; i < 15; i++)
                    unitTest(rand() % 10000, rand () % 10000, 0);
                break ;
            }
            case (4) :
            {
                for (int i = 0; i < 15; i++)
                    unitTest(rand() % 100000, rand () % 50000, 0);
                break ;
            }
            case (5) :
            {
                std::cout << std::endl << GREEN << "1. Vector size 10" << std::endl; 
                std::cout << "2. Vector size 500" << std::endl; 
                std::cout << "3. Vector size 10000" << std::endl;
                std::cout << "4. Vector size 50000" << std::endl;
                std::cout << "Make you choice : " << RESET;
                std::cin >> choice;
                switch (choice)
                {
                    case (1) :
                    {
                        for (int i = 0; i < 15; i++)
                            unitTest(rand() % 10, rand () % 10, 1);
                        break ;
                    }
                    case (2) :
                    {
                        for (int i = 0; i < 15; i++)
                            unitTest(rand() % 500, rand () % 500, 1);
                        break ;
                    }
                    case (3) :
                    {
                        for (int i = 0; i < 15; i++)
                            unitTest(rand() % 10000, rand () % 10000, 1);
                        break ;
                    }
                    case (4) :
                    {
                        for (int i = 0; i < 15; i++)
                            unitTest(rand() % 100000, rand () % 50000, 1);
                        break ;
                    }
                }
                break ;            
            }
            case (6) :
            {
                testDeepCopy();
                break ;
            }
            case (7) : 
            {
                main42();
                break ;
            }
        }
    }
}