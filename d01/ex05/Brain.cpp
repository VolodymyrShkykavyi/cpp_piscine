#include "Brain.hpp"

std::string	Brain::identify( void ) const
{
	const void * address = static_cast<const void*>(this);
	
	std::stringstream ss;
	ss << address;
	return ss.str();
}