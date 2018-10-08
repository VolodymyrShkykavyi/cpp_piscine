#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {}
Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(std::string name, short grade) {
    _name = name;

    if (grade < 1){
        throw new GradeTooHighException();
    }
    if (grade >  150){
        throw new GradeTooLowException();
    }
    _grade = grade;
}

void Bureaucrat::incrementGrade() {
    if (grade <= 1){
        throw new GradeTooHighException();
    }
    _grade--;
}

void Bureaucrat::decrementGrade() {
    if (_grade >= 150){
        throw new GradeTooLowException();
    }
    _grade++;
}

Bureaucrat::GradeTooHighException::GradeTooHighException() {
}