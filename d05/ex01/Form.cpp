#include "Form.hpp"

Form::Form(): _signGrade(0), _executeGrade(0){}
Form::~Form() {}

Form::Form(std::string name, short signGrade, short executeGrade)
    : _name(name), _signGrade(signGrade), _executeGrade(executeGrade) {

    _signed = false;
    if (signGrade < 1 || executeGrade < 1){
        throw Form::GradeTooHighException();
    }
    if (signGrade > 150 || executeGrade > 150){
        throw Form::GradeTooLowException();
    }
}

Form::Form(const Form &src) :
    _signGrade(src._signGrade), _executeGrade(src._executeGrade){
    *this = src;
}

Form& Form::operator=(Form const &rfs) {
    _signed = rfs._signed;

    return *this;
}

std::string Form::getName() const {
    return _name;
}

bool Form::getSigned() const {
    return _signed;
}

short Form::getSignGrade() const {
    return _signGrade;
}

short Form::getExecuteGrade() const {
    return _executeGrade;
}

void Form::beSigned(Bureaucrat &obj) {
    if (obj.getGrade() <= _signGrade){
        _signed = true;
    } else {
        throw Form::GradeTooLowException();
    }
}

const char* Form::GradeTooLowException::what() const throw() {
    return "Too low grade";
}

const char* Form::GradeTooHighException::what() const throw(){
    return "Too high grade";
}

std::ostream &operator<<(std::ostream &o, Form const &i){
    o <<"Form name:" <<  i.getName() << ", signed: " << i.getSigned()
        << ", sign grade: " << i.getSignGrade()
        << ", execute grade: " << i.getExecuteGrade();
    return o;
}
