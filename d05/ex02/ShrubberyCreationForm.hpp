#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form
{
private:
    ShrubberyCreationForm();

public:
    ShrubberyCreationForm(std::string target);
    ~ShrubberyCreationForm();
    ShrubberyCreationForm(ShrubberyCreationForm const &src);
    ShrubberyCreationForm &operator=(ShrubberyCreationForm const &rfs);

    virtual void execute(Bureaucrat const &executor) const;
};
#endif