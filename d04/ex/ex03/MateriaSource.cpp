#include "MateriaSource.hpp"

/* Constructors */
MateriaSource::MateriaSource(void): materia(new AMateria*[4]()) {
	// std::cout << "(MateriaSource) default constructor called" << std::endl;
    return ;
}

/* function members */
void MateriaSource::learnMateria(AMateria* materia) {
	int i = 0;
	for (; this->materia[i]; i++) 
		;
	if (i < 4)
		this->materia[i] = materia->clone();
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	for(int i = 0; this->materia[i]; i++) {
		if (this->materia[i]->getType() == type)
			return this->materia[i]->clone();
	}
	return 0;
}

/* override */
MateriaSource& MateriaSource::operator=(MateriaSource const & rhs) {
	std::cout << "(MateriaSource) assignation operator called";
	AMateria **tmp = rhs.materia;

	for (int i = 0; i < 4; i++)
	{
		if(this->materia[i])
		delete this->materia[i];
	}
	delete [] this->materia;
	this->materia = new AMateria*[4];
	for (int i = 0; i < 4; i++) 
		this->materia[i] = tmp[i]->clone();
	return *this;
}

std::ostream& operator<<(std::ostream& out, MateriaSource const &i) {
	out << "(MateriaSource) WARNING ! ADD A LOGIC <<" << std::endl;
	(void)i;
	return out;
}

MateriaSource::MateriaSource(MateriaSource const & src) {
	std::cout << "(MateriaSource) copy constructor called" << std::endl;
	AMateria **tmp = src.materia;	
	for (int i = 0; i < 4; i++)
	{
		if(this->materia[i])
		delete this->materia[i];
	}
	delete [] this->materia;
	this->materia = new AMateria*[4];
	for (int i = 0; i < 4; i++) 
		this->materia[i] = tmp[i];
	*this = src;
    return ;
}

/* Destructors */
MateriaSource::~MateriaSource(void) {
		for (int i = 0; i < 4; i++)
	{
		if(this->materia[i])
		delete this->materia[i];
	}
	delete [] this->materia;	
	// std::cout << "(MateriaSource) destructor MateriaSource called" << std::endl;
    return ;
}
