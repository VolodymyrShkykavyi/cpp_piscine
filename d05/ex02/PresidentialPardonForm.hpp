#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"
#include "Bureaucrat.hpp"

class PresidentialPardonForm : public Form
{
private:
    PresidentialPardonForm();

public:
    PresidentialPardonForm(std::string target);
    PresidentialPardonForm(PresidentialPardonForm const &src);
    ~PresidentialPardonForm();
    PresidentialPardonForm  &operator=(PresidentialPardonForm const &rfs);

    virtual void execute(const Bureaucrat &executor) const;

};

#endif