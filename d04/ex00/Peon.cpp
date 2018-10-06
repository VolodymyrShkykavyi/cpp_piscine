#include "Peon.hpp"
// #include <iostream>

Peon::Peon(void) {
    std::cout << "Default Constructor Peon called(void)" << std::endl;
}

Peon::Peon(Peon const & src) {
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Peon::Peon(std::string name): Victim(name) {
    this->name = name;
    std::cout << "Zog zog." << std::endl;
}

void Peon::getPolymorphed(void) const {
    std::cout << this->name << " has been turned into a pink pony !" << std::endl;
}

Peon& Peon::operator=(Peon const & rhs) {
    std::cout << "Assignation operator called";
    this->name = rhs.name;
    return *this;
}

Peon::~Peon(void) {
    std::cout << "Bleuark..." << std::endl;
}