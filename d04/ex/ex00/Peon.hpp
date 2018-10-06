// Peon
#ifndef PEON_HPP
#define PEON_HPP
#include <iostream>
#include "Victim.hpp"

class Peon: public Victim {
public:
    Peon(Peon const & src); // Canonical
    Peon(std::string name);    
    virtual ~Peon(void); // Canonical
    Peon& operator=(Peon const & rhs); // Canonical
    void getPolymorphed(void) const;    
private:
    Peon(void); // Canonical constructor default (void!!!!!!)
};
// std::ostream& operator<<(std::ostream& o, Peon const &i);
#endif
