#include "mutantstack.hpp"

/* Constructors */
mutantstack::mutantstack(void) {
	std::cout << "(mutantstack) default constructor called" << std::endl;
    return ;
}

/* function members */
// mutantstack::ERROR::~ERROR(void) throw() { }
// mutantstack::ERROR::ERROR(void) {  }
/* override */
mutantstack& mutantstack::operator=(mutantstack const & rhs) {
	std::cout << "(mutantstack) assignation operator called";
	/* add logic */
	return *this;
}

std::ostream& operator<<(std::ostream& out, mutantstack const &i) {
	out << "(mutantstack) WARNING ! ADD A LOGIC <<" << std::endl;
	return out;
}

mutantstack::mutantstack(mutantstack const & src) {
	std::cout << "(mutantstack) copy constructor called" << std::endl;
	*this = src;
    return ;
}

/* Destructors */
mutantstack::~mutantstack(void) {
	std::cout << "(mutantstack) destructor mutantstack called" << std::endl;
    return ;
}
