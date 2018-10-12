#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <iterator>
#include <algorithm>
#include <iostream>

class Span
{
	private:
		Span();
		std::vector<int>	_arr;
		unsigned int		_n;

	public:
		~Span();
		Span(unsigned int n);
		Span(Span const &src);
		Span & operator=(Span const &src);

		unsigned int shortestSpan();
		unsigned int longestSpan();
		void addNumber(int n);
		void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator last);
		void addNumber(int begin, int last);

		void print();
};

#endif
