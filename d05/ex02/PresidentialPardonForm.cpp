#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() {}
PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(std::string target):
    Form(target, "Presidential", 25, 5){

}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) {
    *this = src;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const &rfs) {
    setTarget(rfs.getTarget());
    setSigned(rfs.getSigned());

    return *this;
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const {
    Form::execute(executor);
    std::cout << this->getTarget() << " has been pardoned by Zafod Beebkerox." << std::endl;
}