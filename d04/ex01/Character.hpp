#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include <iostream>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character {
	protected:
		Character(void);
		std::string name;
		int ap;
		AWeapon* weapon;
	public:
		Character(std::string const & name);
		void recoverAP();
		void equip(AWeapon* weapon);
		void attack(Enemy* enemy);
		std::string virtual getName() const;
		std::string virtual getNameWeapon() const;
		int virtual getAP() const;
		Character(Character const & src);
		Character& operator=(Character const & rhs);
	
		~Character(void);
	private:
};

std::ostream& operator<<(std::ostream& out, Character const &i);

#endif
