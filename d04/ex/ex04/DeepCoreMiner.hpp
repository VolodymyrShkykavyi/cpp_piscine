#ifndef DEEPCOREMINER_HPP
# define DEEPCOREMINER_HPP
# include <iostream>
#include "IAsteroid.hpp"
#include "IMiningLaser.hpp"
class IAsteroid;
class DeepCoreMiner: public IMiningLaser {
	private:
	protected:
	public:
		/* Constructors - do not delete the default constructor (void) */
		DeepCoreMiner(void);

		/* function members (or methods) */
		void mine(IAsteroid*);

		/* override */
		DeepCoreMiner(DeepCoreMiner const & src);
		DeepCoreMiner& operator=(DeepCoreMiner const & rhs);

		/* Destructors */
		~DeepCoreMiner(void);
};

std::ostream& operator<<(std::ostream& out, DeepCoreMiner const &i);

#endif
