#ifndef BUREAUCRAFT_HPP
#define BUREAUCRAFT_HPP

#include <string>
#include <iostream>

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

    std::string getName();
    short getGrade();
    void incrementGrade();
    void decrementGrade();

    class GradeTooHighException: public std::exception
    {
    public:
        GradeTooHighException();
        ~GradeTooHighException();
        GradeTooHighException(GradeTooHighException const &src);
        GradeTooHighException& operator=(GradeTooHighException const &src);
    };

    class GradeTooLowException: public std::exception
    {
        GradeTooLowException();
        ~GradeTooLowException();
        GradeTooLowException(GradeTooLowException const &src);
        GradeTooLowException &operator=(GradeTooLowException const &src);
    };
};

std::ostream& operator<<(std::ostream& o, Bureaucrat const &i);

#endif