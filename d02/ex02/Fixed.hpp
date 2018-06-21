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

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	int		toInt(void) const;
	float	toFloat(void) const;

	Fixed	&operator=(Fixed const &number);
	bool	operator<(Fixed const &number) const;
	bool	operator>(Fixed const &number) const;
	bool	operator>=(Fixed const &number) const;
	bool	operator<=(Fixed const &number) const;
	bool	operator==(Fixed const &number) const;
	bool	operator!=(Fixed const &number) const;
	Fixed	operator+(Fixed const &number) const;
	Fixed	operator-(Fixed const &number) const;
	Fixed	operator*(Fixed const &number) const;
	Fixed	operator/(Fixed const &number) const;
	Fixed	&operator++(void);
	Fixed	operator++(int);
	Fixed	&operator--(void);
	Fixed	operator--(int);

	static Fixed &min(Fixed & a, Fixed & b);
	static Fixed const 	& min(Fixed const & a, Fixed const & b);
	static Fixed &max(Fixed & a, Fixed & b);
	static Fixed const 	& max(Fixed const & a, Fixed const & b);

	friend std::ostream	&operator<<(std::ostream& stream, Fixed const &number);
};

#endif