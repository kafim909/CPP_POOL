#include "Span.Class.hpp"

const void Span::exceedSize::what() throw(){
	std::cout << "Vector max size reached" << std::endl;
}

const void Span::noElem::what() throw(){
	std::cout << "not enough element insinde Vector to find shortest/longuest span" << std::endl;
}

Span::Span(const unsigned int N) : _maxSize(N){}

Span::Span(const Span &copy) :_maxSize(copy.getMaxSize()){
    *this = copy;
}

Span::~Span(){}

Span &Span::operator=(const Span& op){}

const unsigned int Span::getMaxSize() const {return (_maxSize);}


void	Span::addNumber(const int num)
{
	if (_maxSize == Elements.size())
		throw (exceedSize());
	Elements.push_back(num);
}

const int Span::longuestSpan()
{
	return (std::max_element(Elements.begin(), Elements.end()) - std::min_element(Elements.begin(), Elements.end()));
}

const int Span::shortestSpan()
{
	int min;

	std::vector<int>::iterator beg = Elements.begin();
	std::vector<int>::iterator beg2 = Elements.begin();
	std::vector<int>::iterator end = Elements.end();
	beg2++;
	min = *beg - *beg2;
	while (beg != end)
	{
		beg2 = beg + 1;
		while (beg2 != end)
		{
			if ((*beg2 - *beg) < min)
				min = *beg2 - *beg;
		}

	}


}