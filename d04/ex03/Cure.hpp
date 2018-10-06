#ifndef CURE_HPP
# define CURE_HPP
# include <iostream>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Cure: public AMateria {
	private:
	protected:
	public:
		Cure(void);

		AMateria* clone() const;
		void use(ICharacter& target);

		Cure(Cure const & src);
		Cure& operator=(Cure const & rhs);

		~Cure(void);
};

std::ostream& operator<<(std::ostream& out, Cure const &i);

#endif
