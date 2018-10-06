#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include <iostream>
# include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource {
	private:
	protected:
		AMateria **materia;		
	public:
		/* Constructors - do not delete the default constructor (void) */
		MateriaSource(void);

		/* function members (or methods) */
       void learnMateria(AMateria*);
       AMateria* createMateria(std::string const & type);
		/* override */
		MateriaSource(MateriaSource const & src);
		MateriaSource& operator=(MateriaSource const & rhs);

		/* Destructors */
		~MateriaSource(void);
};

std::ostream& operator<<(std::ostream& out, MateriaSource const &i);

#endif
