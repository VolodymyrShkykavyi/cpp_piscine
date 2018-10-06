#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP
# include <iostream>
# include "AMateria.hpp"

class IMateriaSource {
public:
       virtual ~IMateriaSource() {}
       virtual void learnMateria(AMateria*) = 0;
       virtual AMateria* createMateria(std::string const & type) = 0;
};

std::ostream& operator<<(std::ostream& out, IMateriaSource const &i);

#endif
