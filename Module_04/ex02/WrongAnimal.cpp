/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfroidev <sfroidev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 11:32:01 by ecullier          #+#    #+#             */
/*   Updated: 2024/01/22 16:44:22 by sfroidev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): _type("WrongAnimal")
{
	std::cout << "WrongAnimal constructed." <<  std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other): _type(other._type)
{
	std::cout <<  "WrongAnimal copied." << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	if (this != &other)
	{
		this->_type = (other._type);
	}
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructed." << std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal sound." << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (_type);
}