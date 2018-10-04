#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
	this->_value = 0;
}

Fixed::Fixed(Fixed const &number)
{
    std::cout << "Copy constructor called" << std::endl;
	*this = number;
}

Fixed::Fixed(int const number): _value(number << Fixed::_fract)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const number): _value(roundf(number * (1 << Fixed::_fract)))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=(Fixed const &number)
{
	std::cout << "Assignation operator called" << std::endl;
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

float	Fixed::toFloat( void ) const
{
	return this->_value / (float)(1 << Fixed::_fract);
}

int		Fixed::toInt( void ) const
{
	return this->_value / (1 << Fixed::_fract);
}

std::ostream	&operator<<(std::ostream& stream, Fixed const &number){
	stream << number.toFloat();
	return stream;
}
