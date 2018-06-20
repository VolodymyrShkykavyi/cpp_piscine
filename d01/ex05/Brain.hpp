#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>
#include <sstream>
# include <iostream>

class Brain
{
public:
	Brain();
	~Brain();

	std::string	identify( void ) const;
};

#endif