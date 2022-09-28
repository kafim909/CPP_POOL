#include "whatever.hpp"

int main()
{
	// int i = 5;
	// int j = 8;

	// std::cout << "biggest number is : " << max<int>(i, j) << std::endl;
	// std::cout << "lowest number is : " << min<int>(i, j) << std::endl;
	// std::cout << "i = " << i << " j = " << j << std::endl;
	// swap<int>(i, j);
	// std::cout << "i = " << i << " j = " << j << std::endl;

	// char c = 'k';
	// char o = 'p';
	// std::cout << "biggest char is : " << max<char>(c, o) << std::endl;
	// std::cout << "lowest char is : " << min<char>(c, o) << std::endl;
	// std::cout << "c = " << c << " o = " << o << std::endl;
	// swap<char>(c, o);
	// std::cout << "c = " << c << " o = " << o << std::endl;

	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
}