#include "Bureaucrat.hpp"
#include "Form.hpp"


int     main()
{
    Bureaucrat *test;
    Bureaucrat *test2;
    Form       *form;

    try {
//        test = new Bureaucrat("bur", 0);
//        test = new Bureaucrat("bur", 1222);
        test = new Bureaucrat("bur", 1);
//        form = new Form("form1", 0, 10);
//        form = new Form("form1", 10, 250);
        form = new Form("form1", 10, 50);
        test2 = new Bureaucrat("Noob", 150);


        std::cout << *test << ", " << *test2<< std::endl;
        std::cout << *form << std::endl;

        test->signForm(form);
        test2->signForm(form);
        std::cout << *test << ", " << *test2<< std::endl;
        std::cout << *form << std::endl;

    }
    catch (std::exception & e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

}