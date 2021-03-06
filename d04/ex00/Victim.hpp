#ifndef VICTIM_HPP
#define VICTIM_HPP
#include <iostream>

class Victim {
public:
    Victim(std::string name);
    Victim(Victim const & src);
    virtual ~Victim(void);
    Victim& operator=(Victim const & rfs);
    std::string getName(void) const;
    virtual void getPolymorphed(void) const;

protected:
    Victim(void);
    std::string _name;
};

std::ostream& operator<<(std::ostream& o, Victim const &i);
#endif