#include "span.hpp"
#include <iostream>

int main(void)
{
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(55);
	sp.addNumber(6);
	sp.print();
	std::cout << "shortest: " << sp.shortestSpan() << std::endl;
	std::cout << "longest: " << sp.longestSpan() << std::endl;

	//-------------------------------------//
	Span *sp2 = new Span(21231);

    try {
        sp2->addNumber(-123, 239425436);
    }
    catch (std::exception &e) {
        std::cout << "exception: " << e.what() << std::endl;
        delete sp2;
    }

    try {
        sp2 = new Span(21231);
        sp2->addNumber(12, 1334);

        //        sp2->print();
        std::cout << "\nshortest: " << sp2->shortestSpan() << std::endl;
        std::cout << "longest: " << sp2->longestSpan() << std::endl;

        sp2->addNumber(15);
        std::cout << "\nshortest: " << sp2->shortestSpan() << std::endl;

    } catch (std::exception &e) {
        std::cout << "\nexception: " << e.what() << std::endl;
        delete sp2;
    }

}
