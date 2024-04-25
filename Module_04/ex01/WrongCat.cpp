/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfroidev <sfroidev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 11:32:11 by ecullier          #+#    #+#             */
/*   Updated: 2024/01/25 10:18:20 by sfroidev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"


WrongCat::WrongCat()
{
	type = "WrongCat";
	std::cout << "WrongCat constructed" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other)
{
	std::cout << "WrongCat copied" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
	WrongAnimal::operator=(other);
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructed" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "WrongCat Wrongmiaou!" << std::endl;
}
