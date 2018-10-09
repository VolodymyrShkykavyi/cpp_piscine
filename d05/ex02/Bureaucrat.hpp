#ifndef BUREAUCRAFT_HPP
#define BUREAUCRAFT_HPP

#include <string>
#include <iostream>

class Form;
class Bureaucrat
{
private:
    std::string const _name;
    short _grade;
    Bureaucrat();

public:
    Bureaucrat(std::string name, short grade);
    ~Bureaucrat();
    Bureaucrat(Bureaucrat const & src);
    Bureaucrat& operator=(Bureaucrat const &rfs);

    std::string getName() const ;
    short getGrade() const ;
    void incrementGrade();
    void decrementGrade();
    void signForm(Form &form);
    void executeForm(Form const & form);

    class GradeTooHighException : public std::exception {
        virtual const char *what() const  throw();
    };

    class GradeTooLowException : public std::exception {
        virtual const char *what() const  throw();
    };
};

std::ostream& operator<<(std::ostream& o, Bureaucrat const &i);

#endif