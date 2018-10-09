#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() {}
ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):
    Form(target, "Shrubbery", 145, 137){

}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) {
    *this = src;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rfs) {
    setTarget(rfs.getTarget());
    setSigned(rfs.getSigned());

    return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
    Form::execute(executor);

    std::ofstream outFile;
    outFile.open(getTarget() + "_shrubbery", std::ofstream::out);
    if (outFile.is_open()) {
        outFile << "       ###" << std::endl
                << "      #o###" << std::endl
                << "    #####o###" << std::endl
                << "   #o#\\#|#/###" << std::endl
                << "    ###\\|/#o#" << std::endl
                << "     # }|{  #" << std::endl
                << "       }|{" << std::endl;
        outFile.close();
    }
}
