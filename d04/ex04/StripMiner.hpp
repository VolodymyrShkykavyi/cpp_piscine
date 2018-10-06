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
		StripMiner(void);

		void mine(IAsteroid*);
		StripMiner(StripMiner const & src);
		StripMiner& operator=(StripMiner const & rhs);

		~StripMiner(void);
};

std::ostream& operator<<(std::ostream& out, StripMiner const &i);

#endif
