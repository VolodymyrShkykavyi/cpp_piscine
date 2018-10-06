#ifndef SQUAD_HPP
# define SQUAD_HPP
# include <iostream>
# include "ISquad.hpp"

struct node
{
	ISpaceMarine *unit;
	node* next;
};

class Squad:  public ISquad {
	protected:
		node *units;
	public:
		Squad(void);

		bool alreadyInUnits(ISpaceMarine* unit);
		int getCount() const;
		ISpaceMarine* getUnit(int idx);
		int push(ISpaceMarine* unit);
		Squad(Squad const & src);
		Squad& operator=(Squad const & rhs);

		~Squad(void);
};

std::ostream& operator<<(std::ostream& out, Squad const &i);

#endif
