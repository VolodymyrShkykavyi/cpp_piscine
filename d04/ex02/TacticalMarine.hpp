#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP
# include <iostream>
# include "ISpaceMarine.hpp"

class TacticalMarine: public ISpaceMarine {
	private:
	protected:
	public:
		TacticalMarine(void);

		ISpaceMarine* clone() const;
		void battleCry() const;
		void rangedAttack() const;
		void meleeAttack() const;

		TacticalMarine(TacticalMarine const & src);
		TacticalMarine& operator=(TacticalMarine const & rhs);
		~TacticalMarine(void);
};

std::ostream& operator<<(std::ostream& out, TacticalMarine const &i);

#endif
