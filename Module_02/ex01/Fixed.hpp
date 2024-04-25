/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfroidev <sfroidev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 09:28:02 by sfroidev          #+#    #+#             */
/*   Updated: 2024/01/16 14:44:23 by sfroidev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <ostream>

class Fixed
{

public:
	Fixed();
	Fixed(const Fixed &other);
	Fixed &operator=(const Fixed &other);
	Fixed(const float floatValue);
	Fixed(const int intValue);
	
	~Fixed();

	bool			operator>(const Fixed &other) const;
	bool			operator<(const Fixed &other) const;
	bool			operator>=(const Fixed &other) const;
	bool			operator<=(const Fixed &other) const;
	bool			operator==(const Fixed &other) const;
	bool			operator!=(const Fixed &other) const;

	Fixed			operator+(const Fixed &other) const;
	Fixed			operator-(const Fixed &other) const;
	Fixed			operator*(const Fixed &other) const;
	Fixed			operator/(const Fixed &other) const;

	Fixed			&operator++();
	Fixed			operator++(int);
	Fixed			&operator--();
	Fixed			operator--(int);

	int				getRawBits(void) const;
	void			setRawBits(int const raw);
	float			toFloat(void) const;
	int				toInt(void) const;

	static			Fixed &min(Fixed &a, Fixed &b);
	static const	Fixed &min(const Fixed &a, const Fixed &b);
	static			Fixed &max(Fixed &a, Fixed &b);
	static const	Fixed &max(const Fixed &a, const Fixed &b);

private:
	int					_value;
	static const int 	_fractionalBits;

};

std::ostream &operator<<(std::ostream &os, const Fixed &fixed);

#endif
