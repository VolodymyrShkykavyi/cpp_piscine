// Victim
#ifndef VICTIM_HPP
#define VICTIM_HPP
#include <iostream>

class Victim {
public:
    Victim(std::string name);
    Victim(Victim const & src); // Canonical
    virtual ~Victim(void); // Canonical
    Victim& operator=(Victim const & rhs); // Canonical
    std::string getName(void) const;
    virtual void getPolymorphed(void) const;
protected:
    Victim(void); // Canonical constructor default (void!!!!!!)
    std::string name;
};
std::ostream& operator<<(std::ostream& o, Victim const &i);
#endif
