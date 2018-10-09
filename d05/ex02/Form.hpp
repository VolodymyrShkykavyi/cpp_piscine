#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include "Bureaucrat.hpp"


class Form {
private:
    std::string const _name;
    std::string _target;
    bool _signed;
    short const _signGrade;
    short const _executeGrade;

public:
    Form();
    Form(std::string name, short signGrade, short executeGrade);
    Form(std::string target, std::string name, short signGrade, short executeGrade);
    ~Form();
    Form(const Form &src);
    Form &operator=(Form const &rfs);

    std::string getName() const;
    short getSignGrade() const;
    short getExecuteGrade() const;
    bool getSigned() const;
    void setSigned(bool val);
    std::string getTarget() const ;
    void setTarget(std::string val);
    void beSigned(Bureaucrat &obj);

    virtual void execute(Bureaucrat const &executor) const ;

    class GradeTooHighException : public std::exception {
        virtual const char *what() const throw();
    };

    class GradeTooLowException : public std::exception {
        virtual const char *what() const throw();
    };

    class NotSignedException : public std::exception {
        virtual const char *what() const throw();
    };

};

std::ostream &operator<<(std::ostream &o, Form const &i);

#endif