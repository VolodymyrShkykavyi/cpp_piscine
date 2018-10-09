#include "Bureaucrat.hpp"

int     main()
{
    Bureaucrat *test;

    try {
//        test = new Bureaucrat("bur", 0);
//        test = new Bureaucrat("bur", 1222);
        test = new Bureaucrat("bur", 1);

        std::cout << *test << std::endl;
        test->decrementGrade();
        std::cout << *test << std::endl;
        test->incrementGrade();
        std::cout << *test << std::endl;
        test->incrementGrade();
    }
    catch (std::exception & e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

}