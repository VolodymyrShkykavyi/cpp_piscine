#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include "Bureaucrat.hpp"


class Form {
private:
    std::string const _name;
    bool _signed;
    short const _signGrade;
    short const _executeGrade;

    Form();

public:
    Form(std::string name, short signGrade, short executeGrade);

    ~Form();

    Form(const Form &src);

    Form &operator=(Form const &rfs);

    std::string getName() const;

    short getSignGrade() const;

    short getExecuteGrade() const;

    bool getSigned() const;

    void beSigned(Bureaucrat &obj);

    class GradeTooHighException : public std::exception {
        virtual const char *what() const throw();
    };

    class GradeTooLowException : public std::exception {
        virtual const char *what() const throw();
    };

};

std::ostream &operator<<(std::ostream &o, Form const &i);

#endif