#include "easyfind.hpp"

int main()
{
    std::list<int> List = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::array<int, 9> Array = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::vector<int> Vector = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    testOccurence(List, 5, "List test 1, occurence in list");
    testOccurence(List, 1, "List test 2, occurence in list");
    testOccurence(List, 15, "List test 3, occurence not in list");
    testOccurence(List, 5465464, "List test 4, occurence not in list");

    testOccurence(Array, 5, "array test 1, occurence in Array");
    testOccurence(Array, 1, "Array test 2, occurence in Array");
    testOccurence(Array, 15, "Array test 3, occurence not in Array");
    testOccurence(Array, 5465464, "Array test 4, occurence not in Array");

    testOccurence(Vector, 5, "Vector test 1, occurence in Vector");
    testOccurence(Vector, 1, "Vector test 2, occurence in Vector");
    testOccurence(Vector, 15, "Vector test 3, occurence not in Vector");
    testOccurence(Vector, 5465464, "Vector test 4, occurence not in Vector");
}