/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfroidev <sfroidev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 09:30:55 by sfroidev          #+#    #+#             */
/*   Updated: 2024/01/15 14:57:05 by sfroidev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

#include "Fixed.hpp"

const int Fixed::_fractionalBits = 8;

Fixed::Fixed() : _value(0)
{
}

Fixed::Fixed(const int intValue) : _value(intValue << _fractionalBits)
{
}

Fixed::Fixed(const float floatValue) : _value(roundf(floatValue * (1 << _fractionalBits))) 
{
}

Fixed::Fixed(const Fixed &other)
{
	*this = other;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	if (this != &other)
	{
		this->_value = other.getRawBits();
	}
	
	return *this;
}

Fixed::~Fixed()
{
}

int		Fixed::getRawBits(void) const
{
	return this->_value;
}

void	Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

int	Fixed::toInt(void) const
{
	return _value >> _fractionalBits;
}

float	Fixed::toFloat(void) const
{
	return static_cast<float>(_value) / (1 << _fractionalBits);
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
	os << fixed.toFloat();

	return os;
}

bool	Fixed::operator>(const Fixed &other) const
{
	return this->_value > other._value;
}

bool	Fixed::operator<(const Fixed &other) const
{
	return this->_value < other._value;
}

bool	Fixed::operator>=(const Fixed &other) const
{
	return this->_value >= other._value;
}

bool	Fixed::operator<=(const Fixed &other) const
{
	return this->_value <= other._value;
}

bool	Fixed::operator==(const Fixed &other) const
{
	return this->_value == other._value;
}

bool	Fixed::operator!=(const Fixed &other) const
{
	return this->_value != other._value;
}

Fixed	Fixed::operator+(const Fixed &other) const
{
	return Fixed(this->toFloat() + other.toFloat());
}

Fixed	Fixed::operator-(const Fixed &other) const
{
	return Fixed(this->toFloat() - other.toFloat());
}

Fixed	Fixed::operator*(const Fixed &other) const
{
	return Fixed(this->toFloat() * other.toFloat());
}

Fixed	Fixed::operator/(const Fixed &other) const
{
	if (other._value == 0)
	{
		std::cerr << "Error: Division by zero" << std::endl;
	
		return Fixed(0);
	}
	return Fixed(this->toFloat() / other.toFloat());
}

Fixed	&Fixed::operator++()
{
	this->_value++;

	return *this;
}

Fixed	Fixed::operator++(int)
{
	Fixed temp = *this;
	++(*this);

	return temp;
}

Fixed	&Fixed::operator--()
{
	this->_value--;

	return *this;
}

Fixed	Fixed::operator--(int)
{
	Fixed temp = *this;
	--(*this);

	return temp;
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

const	Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a < b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

const	Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a > b)
	{
		return a;
	}
	else
	{
		return b;
	}	
}
