/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfroidev <sfroidev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 11:32:01 by ecullier          #+#    #+#             */
/*   Updated: 2024/01/25 10:18:11 by sfroidev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): type("WrongAnimal")
{
	std::cout << "WrongAnimal constructed." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other): type(other.type)
{
	std::cout << "WrongAnimal copied." << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	if (this != &other)
	{
		this->type = (other.type);
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
	return (type);
}