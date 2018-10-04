#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

#include <iostream>
#include <string>
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap: public FragTrap, public NinjaTrap
{
public:
    SuperTrap();
    SuperTrap(std::string name);
    SuperTrap(SuperTrap const & src);
    ~SuperTrap();
    SuperTrap		& operator=(SuperTrap const & right);

protected:
    void    _setDefaultValues(void);
};

#endif