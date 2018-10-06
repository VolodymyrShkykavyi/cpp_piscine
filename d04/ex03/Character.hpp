#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character: public ICharacter {
	private:
	protected:
		std::string name;
		AMateria **materia;
		Character(void);
	public:
		Character(std::string name);

		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		std::string getWeaponInfos(int idx) const;
		void use(int idx, ICharacter& target);

		Character(Character const & src);
		Character& operator=(Character const & rhs);

		~Character(void);
};

std::ostream& operator<<(std::ostream& out, Character const &i);

#endif
