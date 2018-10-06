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
		/* Constructors - do not delete the default constructor (void) */
		MiningBarge(void);

		/* function members (or methods) */
		void equip(IMiningLaser *);
		void mine(IAsteroid*) const;
		/* override */
		MiningBarge(MiningBarge const & src);
		MiningBarge& operator=(MiningBarge const & rhs);

		/* Destructors */
		~MiningBarge(void);
};

std::ostream& operator<<(std::ostream& out, MiningBarge const &i);

#endif
