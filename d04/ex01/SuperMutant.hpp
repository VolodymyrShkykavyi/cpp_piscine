#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP
# include <iostream>
# include "Enemy.hpp"

class SuperMutant: public Enemy {
	protected:
	public:
		SuperMutant(void);
		SuperMutant(SuperMutant const & src);
		SuperMutant& operator=(SuperMutant const & rhs);
		virtual void takeDamage(int dam);
	
		~SuperMutant(void);
};

std::ostream& operator<<(std::ostream& out, SuperMutant const &i);

#endif
