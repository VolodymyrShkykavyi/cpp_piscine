#ifndef AWEAPON_HPP
# define AWEAPON_HPP
# include <iostream>

// class AWeapon
// {
// private:
// [...]
// public:
// AWeapon(std::string const & name, int apcost, int damage);
// [...] ~AWeapon();
// std::string [...] getName() const;
// int getAPCost() const;
// int getDamage() const;
// [...] void attack() const = 0;
// }
class AWeapon {
	protected:
		std::string name;
		int apcost;
		int	damage;
		AWeapon(void);
        AWeapon(std::string const & name, int apcost, int damage);
	public:
		/* Constructors - do not delete the default constructor (void) */

		std::string virtual getName() const;
		int getAPCost() const;
		int getDamage() const;
		virtual void attack() const = 0;

		/* override */
		AWeapon(AWeapon const & src);
		AWeapon& operator=(AWeapon const & rhs);
	
		/* Destructors */
		virtual ~AWeapon(void);
};

std::ostream& operator<<(std::ostream& out, AWeapon const &i);

#endif
