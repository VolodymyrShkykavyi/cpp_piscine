#include "Bureaucrat.hpp"
#include "Form.hpp"


Bureaucrat::Bureaucrat() {}
Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(std::string name, short grade): _name(name) {

    if (grade < 1){
        throw Bureaucrat::GradeTooHighException();
    }
    if (grade >  150){
        throw Bureaucrat::GradeTooLowException();
    }
    _grade = grade;
}

void Bureaucrat::incrementGrade() {
    if (_grade <= 1){
        throw Bureaucrat::GradeTooHighException();
    }
    _grade--;
}

void Bureaucrat::decrementGrade() {
    if (_grade >= 150){
        throw Bureaucrat::GradeTooLowException();
    }
    _grade++;
}

void Bureaucrat::signForm(Form *form) {
    try {
        form->beSigned(*this);
        std::cout << _name << " signs " << form->getName() << std::endl;
    }
    catch (std::exception &e) {
        std::cout << _name << " cannot sign " << form->getName()
            << " because " << e.what() << std::endl;
    }

}

Bureaucrat::Bureaucrat(Bureaucrat const &src) {
    *this = src;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const &rfs) {
    _grade = rfs._grade;

    return *this;
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return "too high grade. Max is 1";
}

const char* Bureaucrat::GradeTooLowException::what() const  throw(){
    return "too low grade. Min is 150";
}

std::ostream& operator<<(std::ostream& o, Bureaucrat const &i){
    o <<" Name:" <<  i.getName() << ", grade: " << i.getGrade();
    return o;
}

std::string Bureaucrat::getName() const {
    return _name;
}

short Bureaucrat::getGrade() const {
    return _grade;
}
