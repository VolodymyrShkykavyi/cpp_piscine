#include "Fixed.hpp"

Fixed::Fixed()
{
	this->_value = 0;
}

Fixed::Fixed(Fixed const &number)
{
	*this = number;
}

Fixed::Fixed(int const number): _value(number << Fixed::_fract)
{
	return;
}

Fixed::Fixed(float const number): _value(roundf(number * (1 << Fixed::_fract)))
{
	return;
}

Fixed::~Fixed()
{
}

Fixed	&Fixed::operator=(Fixed const &number)
{
	this->_value = number.getRawBits();
	return *this;
}

int		Fixed::getRawBits() const
{
	return this->_value;
}

void	Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

float	Fixed::toFloat() const
{
	return this->_value / (float)(1 << Fixed::_fract);
}

int		Fixed::toInt() const
{
	return this->_value / (1 << Fixed::_fract);
}

std::ostream	&operator<<(std::ostream& stream, Fixed const &number){
	stream << number.toFloat();
	return stream;
}

bool	Fixed::operator<(Fixed const &number) const
{
	return (this->_value < number.getRawBits());
}

bool	Fixed::operator>(Fixed const &number) const
{
	return (this->_value > number.getRawBits());
}

bool	Fixed::operator>=(Fixed const &number) const
{
	return (this->_value >= number.getRawBits());
}

bool	Fixed::operator<=(Fixed const &number) const
{
	return (this->_value <= number.getRawBits());
}

bool	Fixed::operator==(Fixed const &number) const
{
	return (this->_value == number.getRawBits());
}

bool	Fixed::operator!=(Fixed const &number) const
{
	return (this->_value != number.getRawBits());
}

Fixed	Fixed::operator+(Fixed const &number) const
{
	return (Fixed(this->toFloat() + number.toFloat()));
}

Fixed	Fixed::operator-(Fixed const &number) const
{
	return (Fixed(this->toFloat() - number.toFloat()));
}

Fixed	Fixed::operator*(Fixed const &number) const
{
	return (Fixed(this->toFloat() * number.toFloat()));
}

Fixed	Fixed::operator/(Fixed const &number) const
{
	return (Fixed(this->toFloat() / number.toFloat()));
}

Fixed	&Fixed::operator++()
{
	this->_value++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed tmp(*this);
	++(*this);
	return tmp;
}

Fixed	&Fixed::operator--()
{
	this->_value--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp(*this);
	--(*this);
	return tmp;
}

Fixed &Fixed::min(Fixed & a, Fixed & b)
{
	return (a < b) ? a : b;
}

Fixed const 	&Fixed::min(Fixed const & a, Fixed const & b)
{
	return (a < b) ? a : b;
}

Fixed &Fixed::max(Fixed & a, Fixed & b)
{
	return (a > b) ? a : b;
}

Fixed const 	&Fixed::max(Fixed const & a, Fixed const & b)
{
	return (a > b) ? a : b;
}
