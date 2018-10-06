#include "Peon.hpp"
#include "Sorcerer.hpp"
#include "Victim.hpp"
#include <iostream>

//class Pig: public Victim {
//public:
//    Pig(std::string name);
//    virtual ~Pig(void);
//    void getPolymorphed(void) const;
//private:
//    Pig(void);
//};
//
//Pig::Pig(std::string name): Victim(name) {
//    this->_name = name;
//    std::cout << "Pig created " << std::endl;
//}
//
//void Pig::getPolymorphed(void) const {
//    std::cout << this->_name << " has been turned into phoenix(salo)!" << std::endl;
//}
//Pig::~Pig(void) {
//    std::cout << "Pig go to dinner..." << std::endl;
//}
//
//class Cow: public Victim {
//public:
//    Cow(std::string name);
//    virtual ~Cow(void);
//    void getPolymorphed(void) const;
//private:
//    Cow(void);
//};
//
//Cow::Cow(std::string name): Victim(name) {
//    this->_name = name;
//    std::cout << "Cow created " << std::endl;
//}

//void Cow::getPolymorphed(void) const {
//    std::cout << this->_name << " has been turned into horse !" << std::endl;
//}
//Cow::~Cow(void) {
//    std::cout << "Cow die on the field..." << std::endl;
//}

int main()
{
    Sorcerer robert("Robert", "the Magnificent");
    Victim jim("Jimmy");
    Peon joe("Joe");
    Pig pig("piiig");
    std::cout << robert << jim << joe << pig;
    robert.polymorph(jim);
    robert.polymorph(joe);
//    robert.polymorph(pig);
    return 0;
}