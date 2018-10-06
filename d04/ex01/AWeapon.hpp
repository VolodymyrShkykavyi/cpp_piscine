#ifndef AWEAPON_HPP
# define AWEAPON_HPP
# include <iostream>

class AWeapon {
	protected:
		std::string name;
		int apcost;
		int	damage;
		AWeapon(void);
        AWeapon(std::string const & name, int apcost, int damage);
	public:
		std::string virtual getName() const;
		int getAPCost() const;
		int getDamage() const;
		virtual void attack() const = 0;

		AWeapon(AWeapon const & src);
		AWeapon& operator=(AWeapon const & rhs);
	
		virtual ~AWeapon(void);
};

std::ostream& operator<<(std::ostream& out, AWeapon const &i);

#endif
