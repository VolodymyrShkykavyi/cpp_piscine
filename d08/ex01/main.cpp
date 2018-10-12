#include "span.hpp"
#include <algorithm>
#include <ctime>
#include <vector>
#include <iostream>

int main(void)
{
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	sp.print();
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	/* ------------------------ */

	std::srand(time(0));
	std::vector<int> mydock( 10 );
	for (std::vector<int>::iterator it = mydock.begin(); it != mydock.end(); it++)
		*it = rand() % 100;
	Span sprand = Span(10);
	sprand.addNumber(mydock.begin(), mydock.end() );
	sprand.print();
	std::cout << sprand.shortestSpan() << std::endl;
	std::cout << sprand.longestSpan() << std::endl;
	return (0);
}
