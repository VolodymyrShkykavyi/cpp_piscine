#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <ctime>
#include <cstdlib>
#include <iostream>

#include "Form.hpp"
#include "Bureaucrat.hpp"

class RobotomyRequestForm : public Form
{
private:
    RobotomyRequestForm();

public:
    ~RobotomyRequestForm();
    RobotomyRequestForm(std::string target);
    RobotomyRequestForm(RobotomyRequestForm const &src);
    RobotomyRequestForm &operator=( RobotomyRequestForm const &rhs);

    virtual void execute(const Bureaucrat &executor) const;
};

#endif