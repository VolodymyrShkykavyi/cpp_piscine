#ifndef HUMAN_HPP
# define HUMAN_HPP

# include "Brain.hpp"
# include <string>
# include <iostream>

class Human
{
	const Brain _brain;

public:
	std::string	identify( void ) const;
	const Brain	&getBrain( void ) const;
};

#endif