#include "span.hpp"
#include <vector>
#include <algorithm>
#include <iostream>

Span::Span(void) {}

Span::Span(unsigned int n) : _range(std::vector<int>(n)), _n(0) {}

Span::~Span(void) {}

Span::Span(Span const & o)
{
	*this = o;
}

Span & Span::operator=(Span const & rhs)
{
	this->_n = rhs._n;
	this->_range = rhs._range;
	return *this;
}

void	Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	for (std::vector<int>::iterator it = begin; it != end; it++)
		this->addNumber(*it);
}

void	Span::addNumber(int n)
{
	if (this->_range.size() == this->_n)
		throw ( std::range_error("range overflow") );
	this->_range[this->_n] = n;
	this->_n += 1;
	std::sort (this->_range.begin(), this->_range.begin() + this->_n);
}

unsigned int		Span::longestSpan(void)
{
	if (this->_n < 2)
		throw (std::exception() );
	int max = * std::max_element( this->_range.begin(), this->_range.begin() + this->_n);
	int min = * std::min_element( this->_range.begin(), this->_range.begin() + this->_n);
	return max - min;
}

void	Span::print(void)
{
	for (std::vector<int>::iterator it = this->_range.begin(); it  != this->_range.begin() + this->_n; it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

unsigned int		Span::shortestSpan(void)
{
	if (this->_n < 2)
		throw (std::exception());
	unsigned int min = ( * (this->_range.begin() + 1) - ( * this->_range.begin() ) );
	for (std::vector<int>::iterator it = this->_range.begin() + 1;
		it != this->_range.begin() + this->_n - 1;
		it++)
	{
		unsigned int tmp = (*(it + 1) - *it);
		if (tmp < min)
			min = tmp;
	}
	return min;
}
