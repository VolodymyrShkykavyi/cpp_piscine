// Sorcerer
#ifndef SORCERER_HPP
#define SORCERER_HPP
#include <iostream>
#include "Victim.hpp"

class Sorcerer {
public:
    Sorcerer(std::string name, std::string title); // Canonical constructor default (void!!!!!!)
    Sorcerer(Sorcerer const & src); // Canonical
    ~Sorcerer(void); // Canonical
    Sorcerer& operator=(Sorcerer const & rhs); // Canonical
    std::string getName(void) const;
    std::string getTitle(void) const;
    void polymorph(Victim const &victim) const;
private:
    Sorcerer(void); // Canonical constructor default (void!!!!!!)
    std::string name;
    std::string title;
};
std::ostream& operator<<(std::ostream& o, Sorcerer const &i);
#endif
