#ifndef SORCERER_HPP
# define SORCERER_HPP

#include <string>
#include <iostream>
#include <ctime>
#include <iomanip>
#include <sstream>
#include <fstream>

class Sorcerer
{
public:
	Sorcerer(std::string name, std::string title);
	Sorcerer(Sorcerer const &rfs);
	Sorcerer &operator=(Sorcerer const &rfs);
	~Sorcerer();
	
	std::string getName(void) const;
	std::string getTitle(void) const;
	void polymorph(Victim const &victim) const;

private:
	std::string	_name;
	std::string	_title;

	Sorcerer();
};

std::ostream& operator<<(std::ostream& os, Sorcerer const &obj);

#endif