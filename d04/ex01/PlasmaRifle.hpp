#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP
# include <iostream>
# include "AWeapon.hpp"

class PlasmaRifle: public AWeapon {
	private:
	public:
		PlasmaRifle(void);
		PlasmaRifle(PlasmaRifle const & src);
		PlasmaRifle& operator=(PlasmaRifle const & rhs);
		void attack() const;	
		~PlasmaRifle(void);
	private:
};

std::ostream& operator<<(std::ostream& out, PlasmaRifle const &i);

#endif
