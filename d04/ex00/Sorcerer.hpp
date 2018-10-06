#ifndef SORCERER_HPP
# define SORCERER_HPP

#include <string>

class Sorcerer
{
public:
	Sorcerer(std::string name, std::string title);
	Sorcerer(Sorcerer const &rfs);
	Sorcerer &operator=(Sorcerer const &rfs);
	~Sorcerer();
	

private:
	std::string	_name;
	std::string	_title;

	Sorcerer();
};

#endif