#ifndef MININGBARGE_HPP
# define MININGBARGE_HPP
# include <iostream>
# include "IAsteroid.hpp"
# include "IMiningLaser.hpp"

class IMiningLaser;
class IAsteroid;
class MiningBarge {
	private:
	protected:
		IMiningLaser* lasers[4];
	public:
		MiningBarge(void);

		void equip(IMiningLaser *);
		void mine(IAsteroid*) const;
		MiningBarge(MiningBarge const & src);
		MiningBarge& operator=(MiningBarge const & rhs);

		~MiningBarge(void);
};

std::ostream& operator<<(std::ostream& out, MiningBarge const &i);

#endif
