#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP
# include <iostream>
# include "ISpaceMarine.hpp"

class AssaultTerminator: public ISpaceMarine {
	private:
	protected:
	public:
		/* Constructors - do not delete the default constructor (void) */
		AssaultTerminator(void);

		/* function members (or methods) */
		ISpaceMarine* clone() const;
		void battleCry() const;
		void rangedAttack() const;
		std::string getType() const;		
		void meleeAttack() const;

		/* override */
		AssaultTerminator(AssaultTerminator const & src);
		AssaultTerminator& operator=(AssaultTerminator const & rhs);
		/* Destructors */
		~AssaultTerminator(void);
};

std::ostream& operator<<(std::ostream& out, AssaultTerminator const &i);

#endif
