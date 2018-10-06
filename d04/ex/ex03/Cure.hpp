#ifndef CURE_HPP
# define CURE_HPP
# include <iostream>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Cure: public AMateria {
	private:
	protected:
	public:
		/* Constructors - do not delete the default constructor (void) */
		Cure(void);

		/* function members (or methods) */
		AMateria* clone() const;
		void use(ICharacter& target);
		/* override */
		Cure(Cure const & src);
		Cure& operator=(Cure const & rhs);

		/* Destructors */
		~Cure(void);
};

std::ostream& operator<<(std::ostream& out, Cure const &i);

#endif
