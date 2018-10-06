#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP
# include <iostream>
# include "Enemy.hpp"

class RadScorpion: public Enemy {
	protected:
	public:
		/* Constructors - do not delete the default constructor (void) */
		RadScorpion(void);
		/* override */
		RadScorpion(RadScorpion const & src);
		RadScorpion& operator=(RadScorpion const & rhs);
		virtual void takeDamage(int dam);
	
		/* Destructors */
		~RadScorpion(void);
};

std::ostream& operator<<(std::ostream& out, RadScorpion const &i);

#endif
