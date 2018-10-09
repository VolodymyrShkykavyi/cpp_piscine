#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() {}
RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(std::string target):
    Form(target, "Robotomy", 72, 45){

    srand(time(NULL));
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) {
    *this = src;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const &rfs) {
    setTarget(rfs.getTarget());
    setSigned(rfs.getSigned());

    return *this;
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const {
    Form::execute(executor);
    if (rand() % 2){
        std::cout << "DRRDRDRDRDRRR..." << getTarget()
                  << " has been robotomized successfully !" << std::endl;

    } else {
        std::cout << "The " << getTarget() << "robotomization failed !" << std::endl;
    }
}