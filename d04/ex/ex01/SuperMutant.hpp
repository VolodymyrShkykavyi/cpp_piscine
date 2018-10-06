#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP
# include <iostream>
# include "Enemy.hpp"

class SuperMutant: public Enemy {
	protected:
	public:
		/* Constructors - do not delete the default constructor (void) */
		SuperMutant(void);
		/* override */
		SuperMutant(SuperMutant const & src);
		SuperMutant& operator=(SuperMutant const & rhs);
		virtual void takeDamage(int dam);
	
		/* Destructors */
		~SuperMutant(void);
};

std::ostream& operator<<(std::ostream& out, SuperMutant const &i);

#endif
