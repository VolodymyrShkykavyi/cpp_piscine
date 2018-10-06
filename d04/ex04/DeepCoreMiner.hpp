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

		DeepCoreMiner(void);


		void mine(IAsteroid*);


		DeepCoreMiner(DeepCoreMiner const & src);
		DeepCoreMiner& operator=(DeepCoreMiner const & rhs);


		~DeepCoreMiner(void);
};

std::ostream& operator<<(std::ostream& out, DeepCoreMiner const &i);

#endif
