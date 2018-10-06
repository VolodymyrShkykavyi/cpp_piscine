#include "Peon.hpp"
#include "Sorcerer.hpp"
#include "Victim.hpp"
#include <iostream>
#define CALL_MEMBER_FN(object,ptrToMember)  ((object)->*(ptrToMember))

class Cat: public Victim {
public:
    Cat(std::string name);    
    virtual ~Cat(void); // Canonical
    void getPolymorphed(void) const;    
private:
    Cat(void); // Canonical constructor default (void!!!!!!)
};

Cat::Cat(std::string name): Victim(name) {
    this->name = name;
    std::cout << "cat created " << std::endl;
}

void Cat::getPolymorphed(void) const {
    std::cout << this->name << " has been turned into a red dog!" << std::endl;
}
Cat::~Cat(void) {
    std::cout << "cat is resting forever..." << std::endl;
}

class Soldiers: public Victim {
public:
    Soldiers(std::string name);    
    virtual ~Soldiers(void); // Canonical
    void getPolymorphed(void) const;    
private:
    Soldiers(void); // Canonical constructor default (void!!!!!!)
};

Soldiers::Soldiers(std::string name): Victim(name) {
    this->name = name;
    std::cout << "soldiers created " << std::endl;
}

void Soldiers::getPolymorphed(void) const {
    std::cout << this->name << " has been turned into a purple horse !" << std::endl;
}
Soldiers::~Soldiers(void) {
    std::cout << "Soldiers die on the field..." << std::endl;
}

int     main(void) {

    Sorcerer robert("Robert", "the Magnificent");
    Victim jim("Jimmy");
    Peon joe("Joe");
    Cat figaro("figaro");
    Soldiers arnold("Arnold");
    std::cout << robert << jim << joe;
    robert.polymorph(jim);
    robert.polymorph(figaro);
    robert.polymorph(arnold);
    robert.polymorph(joe);
    return (0);
}