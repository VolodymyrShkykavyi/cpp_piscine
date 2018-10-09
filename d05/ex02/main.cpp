#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

int     main()
{
    Bureaucrat *test;
    Bureaucrat *test2;
    ShrubberyCreationForm sf("shrub");
    RobotomyRequestForm rf("robot");
    PresidentialPardonForm pf("pres");

    try {
        test = new Bureaucrat("bur", 1);
        test2 = new Bureaucrat("Noob", 40);

        test->signForm(sf);
        test->executeForm(sf);

        test->signForm(pf);
        test->executeForm(pf);

        test2->signForm(pf);
        test2->executeForm(pf);

        test2->signForm(rf);
        test2->executeForm(rf);

    }
    catch (std::exception & e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

}
