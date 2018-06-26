#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{

private:

	int					_value;
	static const int	_fract = 8;

public:

	Fixed();
	~Fixed();
	Fixed(Fixed const &number);

	Fixed	&operator=(Fixed const &number);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);

};

#endif