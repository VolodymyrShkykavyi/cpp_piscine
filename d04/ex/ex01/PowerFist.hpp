#ifndef POWERFIST_HPP
# define POWERFIST_HPP
# include <iostream>
# include "AWeapon.hpp"

class PowerFist: public AWeapon {
	private:
	public:
		/* Constructors - do not delete the default constructor (void) */
		PowerFist(void);
		/* override */
		PowerFist(PowerFist const & src);
		PowerFist& operator=(PowerFist const & rhs);
		void attack() const;	
		/* Destructors */
		~PowerFist(void);
	private:
};

std::ostream& operator<<(std::ostream& out, PowerFist const &i);

#endif
