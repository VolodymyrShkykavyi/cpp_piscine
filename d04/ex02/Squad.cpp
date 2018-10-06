#include "Squad.hpp"

Squad::Squad(void): units(NULL) {
	std::cout << "(Squad) default constructor called" << std::endl;
    return ;
}

int Squad::getCount() const {
	int i;
	const node *tmp = this->units;

	i = 0;
	while(tmp) {
		i++;
		tmp = tmp->next;
	}
	return i;
}

ISpaceMarine* Squad::getUnit(int i){
	const node *loop = this->units;
	int idx;

	idx = -1;
	while (loop && ++idx != i)
		loop = loop->next;
	return loop->unit;
}


bool Squad::alreadyInUnits(ISpaceMarine* unit) {
	node *loop = this->units;
	if(!this->units)
		return false;
	while (loop)
	{
		if (loop->unit == unit)
			return true;
		loop = loop->next;
	}
	return false;
}
int Squad::push(ISpaceMarine* unit) {
	node *begin = this->units;
	unit->meleeAttack();
	if (!unit || (this->units && this->alreadyInUnits(unit)))
	{
		return this->getCount();
	}
	node *nw = new node();
	nw->unit = unit->clone();
	nw->next = NULL;
	if (!this->units) {
			this->units = nw;
			return 1;
	}
	while (this->units->next)
		this->units = this->units->next;
	this->units->next = nw;
	this->units = begin;
	return 0;
}


Squad& Squad::operator=(Squad const & rhs) {
	std::cout << "(Squad) assignation operator called" << std::endl;
	node 	*tmp;
	int i;

	i = 0;
	tmp = rhs.units;
	while(this->units) {
		delete this->units->unit;
		delete this->units;
		this->units = this->units->next;
	}
	while(tmp) {
		this->push(tmp->unit);
		tmp = tmp->next;
   	}
	return *this;
}

std::ostream& operator<<(std::ostream& out, Squad const &i) {
	out << "(Squad) WARNING ! ADD A LOGIC <<" << std::endl;
	(void)i;
	return out;
}

Squad::Squad(Squad const & src) {
	std::cout << "(Squad) copy constructor called" << std::endl;
	node *tmp = src.units;
	
	while(tmp) {
		this->push(tmp->unit);
		tmp = tmp->next;
   	}
    return ;
}

Squad::~Squad(void) {
	node     *current;
	node     *next;

   	current = this->units;
   	while (current) 
   	{
       next = current->next;
	   delete current->unit;
	   delete current;
       current = next;
   	}
	this->units = NULL;
}
