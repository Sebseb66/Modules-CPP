/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfroidev <sfroidev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 09:25:30 by sfroidev          #+#    #+#             */
/*   Updated: 2024/01/15 15:51:46 by sfroidev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed
{

public:
	Fixed();
	Fixed(const Fixed &other);
	Fixed &operator=(const Fixed &other);
	
	~Fixed();

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	
private:
	int					_value;
	static const int	_fractionalBits = 8;

};

#endif
