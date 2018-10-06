#ifndef STRIPMINER_HPP
# define STRIPMINER_HPP
# include <iostream>
# include "IAsteroid.hpp"
# include "IMiningLaser.hpp"

class IMiningLaser;
class IAsteroid;
class StripMiner: public IMiningLaser {
	private:
	protected:
	public:
		/* Constructors - do not delete the default constructor (void) */
		StripMiner(void);

		/* function members (or methods) */
		void mine(IAsteroid*);
		/* override */
		StripMiner(StripMiner const & src);
		StripMiner& operator=(StripMiner const & rhs);

		/* Destructors */
		~StripMiner(void);
};

std::ostream& operator<<(std::ostream& out, StripMiner const &i);

#endif
