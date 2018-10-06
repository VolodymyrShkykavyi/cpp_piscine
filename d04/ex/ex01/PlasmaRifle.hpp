#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP
# include <iostream>
# include "AWeapon.hpp"

class PlasmaRifle: public AWeapon {
	private:
	public:
		/* Constructors - do not delete the default constructor (void) */
		PlasmaRifle(void);
		/* override */
		PlasmaRifle(PlasmaRifle const & src);
		PlasmaRifle& operator=(PlasmaRifle const & rhs);
		void attack() const;	
		/* Destructors */
		~PlasmaRifle(void);
	private:
};

std::ostream& operator<<(std::ostream& out, PlasmaRifle const &i);

#endif
