#ifndef ICE_HPP
# define ICE_HPP
# include <iostream>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Ice: public AMateria {
	private:
	protected:
	public:
		/* Constructors - do not delete the default constructor (void) */
		Ice(void);

		/* function members (or methods) */
		AMateria* clone() const;
		void use(ICharacter& target);
		/* override */
		Ice(Ice const & src);
		Ice& operator=(Ice const & rhs);

		/* Destructors */
		~Ice(void);
};

std::ostream& operator<<(std::ostream& out, Ice const &i);

#endif
