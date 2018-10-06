#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP
# include <iostream>
# include "ISpaceMarine.hpp"

class TacticalMarine: public ISpaceMarine {
	private:
	protected:
	public:
		/* Constructors - do not delete the default constructor (void) */
		TacticalMarine(void);

		/* function members (or methods) */
		ISpaceMarine* clone() const;
		void battleCry() const;
		void rangedAttack() const;
		void meleeAttack() const;

		/* override */
		TacticalMarine(TacticalMarine const & src);
		TacticalMarine& operator=(TacticalMarine const & rhs);
		/* Destructors */
		~TacticalMarine(void);
};

std::ostream& operator<<(std::ostream& out, TacticalMarine const &i);

#endif
