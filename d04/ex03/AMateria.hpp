#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include <iostream>
# include "ICharacter.hpp"

class ICharacter;
class AMateria {
	private:
		unsigned int xp_;
	protected:
		std::string type;
		AMateria(void);
	public:
		AMateria(std::string const & type);
		std::string const & getType() const;
		void setType(std::string type);
		unsigned int getXP() const;
		void setXP(unsigned int xp_);		
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);

		AMateria(AMateria const & src);
		AMateria& operator=(AMateria const & rhs);


		virtual ~AMateria(void);
};

std::ostream& operator<<(std::ostream& out, AMateria const &i);

#endif
