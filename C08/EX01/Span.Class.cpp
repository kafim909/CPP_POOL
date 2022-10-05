#include "Span.Class.hpp"

const void Span::exceedSize::what() throw(){
	std::cerr << RED << "Vector max size reached" << RESET << std::endl << std::endl;
}

const void Span::noElem::what() throw(){
	std::cerr << RED << "not enough element insinde Vector to find shortest/longest span" << RESET << std::endl;
}

Span::Span(const unsigned int N) : _maxSize(N) {}

Span::Span(const Span &copy) :_maxSize(copy.getMaxSize()){
	*this = copy;
}

Span::~Span(){}

Span &Span::operator=(const Span& op){
	Elements = op.getVector();
	return (*this);
}

const unsigned int Span::getMaxSize() const {return (_maxSize);}

const unsigned int Span::getSize() const {return (Elements.size());}

const std::vector<int> &Span::getVector() const {return (Elements);}

int	generateRandom()
{
	return (rand() % 1000000);
}

void	Span::addBunch(const unsigned int num)
{
	if ((Elements.size() + num) > _maxSize)
		throw (exceedSize());
	std::vector<int> tmp(num);
	std::generate(tmp.begin(), tmp.begin() + num, generateRandom);
	std::copy(tmp.begin(), tmp.end(), std::back_inserter(Elements));
}

void Span::printElements(){
	for (std::vector<int>::iterator it = Elements.begin(); it != Elements.end(); ++it)
		std::cout << " | " << *it;
	std::cout << " | ";
}

void	Span::addNumber(const unsigned int num){
	if (_maxSize == Elements.size())
		throw (exceedSize());
	Elements.push_back(num);
}

const unsigned int Span::longestSpan(){
	if (Elements.size() <= 1)
		throw(noElem());
	return (*std::max_element(Elements.begin(), Elements.end()) - *std::min_element(Elements.begin(), Elements.end()));
}

const unsigned int Span::shortestSpan(){
	if (Elements.size() <= 1)
		throw(noElem());
	unsigned int min;
	std::vector<int>::iterator beg = Elements.begin();
	std::vector<int>::iterator beg2 = Elements.begin();
	std::vector<int>::iterator end = Elements.end();
	beg2++;
	min = *beg - *beg2;
	for (; beg != end; beg++)
	{
		beg2 = beg + 1;
		for (; beg2 != end; beg2++)
		{
			if (*beg2 > *beg)
				if (*beg2 - *beg < min)
					min = *beg2 - *beg;
			else
				if (*beg - *beg2 < min)
					min = *beg - *beg2;
		}
	}
	return (min);
}
