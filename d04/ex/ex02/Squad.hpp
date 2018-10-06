#ifndef SQUAD_HPP
# define SQUAD_HPP
# include <iostream>
# include "ISquad.hpp"
// # include "ISpaceMarine.hpp"

struct node
{
	ISpaceMarine *unit;
	node* next;
};

class Squad:  public ISquad {
	// private:
	protected:
		node *units;
	public:
		/* Constructors - do not delete the default constructor (void) */
		Squad(void);

		/* function members (or methods) */
		bool alreadyInUnits(ISpaceMarine* unit);		
		int getCount() const;
		ISpaceMarine* getUnit(int idx);
		int push(ISpaceMarine* unit);
		/* override */
		Squad(Squad const & src);
		Squad& operator=(Squad const & rhs);

		/* Destructors */
		~Squad(void);
};

std::ostream& operator<<(std::ostream& out, Squad const &i);

#endif
