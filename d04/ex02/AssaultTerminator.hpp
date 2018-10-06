#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP
# include <iostream>
# include "ISpaceMarine.hpp"

class AssaultTerminator: public ISpaceMarine {
	private:
	protected:
	public:
		AssaultTerminator(void);

		ISpaceMarine* clone() const;
		void battleCry() const;
		void rangedAttack() const;
		std::string getType() const;		
		void meleeAttack() const;

		AssaultTerminator(AssaultTerminator const & src);
		AssaultTerminator& operator=(AssaultTerminator const & rhs);
		~AssaultTerminator(void);
};

std::ostream& operator<<(std::ostream& out, AssaultTerminator const &i);

#endif
