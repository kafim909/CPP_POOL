#include "iter.hpp"

int main()
{
	std::string tabS[] = {"coucou", "je", "suis", "la"};
	int	tabI[4] = {5, 6, 78, 9};
	float tabF[] = {4.5, 8.4, 9.4, 78.2};
	char tabC[] = {'d', 'S', 'W', 'q'};

	iter(tabS, 4, &printElem);
	std::cout << std::endl;
	iter(tabI, 4, &printElem);
	std::cout << std::endl;
	iter(tabC, 4, &printElem);
	std::cout << std::endl;
	iter(tabF, 4, &printElem);
}