#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

#include <iostream>
#include <string>
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap: virtual public FragTrap, virtual public NinjaTrap
{
public:
    SuperTrap();
    SuperTrap(std::string name);
    SuperTrap(SuperTrap const & src);
    ~SuperTrap();
    SuperTrap		& operator=(SuperTrap const & right);

    void		rangedAttack(std::string const &target) const;
    void		meleeAttack(std::string const &target) const;

protected:
    void    _setDefaultValues(void);

};

#endif