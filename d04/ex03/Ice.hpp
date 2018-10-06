#ifndef ICE_HPP
# define ICE_HPP
# include <iostream>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Ice: public AMateria {
	private:
	protected:
	public:
		Ice(void);

		AMateria* clone() const;
		void use(ICharacter& target);

		Ice(Ice const & src);
		Ice& operator=(Ice const & rhs);

		~Ice(void);
};

std::ostream& operator<<(std::ostream& out, Ice const &i);

#endif
