#ifndef POWERFIST_HPP
# define POWERFIST_HPP
# include <iostream>
# include "AWeapon.hpp"

class PowerFist: public AWeapon {
	private:
	public:
		PowerFist(void);
		PowerFist(PowerFist const & src);
		PowerFist& operator=(PowerFist const & rhs);
		void attack() const;
		~PowerFist(void);
	private:
};

std::ostream& operator<<(std::ostream& out, PowerFist const &i);

#endif
