#ifndef ISQUAD_HPP
# define ISQUAD_HPP
# include <iostream>
# include "ISpaceMarine.hpp"

class ISquad {
	// private:
	// protected:
	public:
		/* Constructors - do not delete the default constructor (void) */
		// ISquad(void);

		/* function members (or methods) */

		/* override */
		// ISquad(ISquad const & src);
		// ISquad& operator=(ISquad const & rhs);

		/* Destructors */
		virtual ~ISquad() {};
		virtual int getCount() const = 0;
		virtual ISpaceMarine* getUnit(int) = 0;
		virtual int push(ISpaceMarine*) = 0;
};

// std::ostream& operator<<(std::ostream& out, ISquad const &i);

#endif
