#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{

private:

	int					_value;
	static const int	_fract = 8;

public:

	Fixed();
	Fixed(Fixed const &number);
	Fixed(int number);
	Fixed(float number);
	~Fixed();

	Fixed	&operator=(Fixed const &number);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	int		toInt(void) const;
	float	toFloat(void) const;

	friend std::ostream	&operator<<(std::ostream& stream, Fixed const &number);
};

#endif