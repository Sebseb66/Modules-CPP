/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfroidev <sfroidev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 09:58:11 by sfroidev          #+#    #+#             */
/*   Updated: 2024/01/25 10:05:07 by sfroidev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Unknown")
{
	std::cout << "Animal constructed." << std::endl;
}

Animal::Animal(const Animal &other): type(other.type)
{
	std::cout << "Animal copied." << std::endl;
}

Animal &Animal::operator=(const Animal &other)
{
	if (this != &other)
	{
		this->type= other.type;
	}
	return (*this);
}

Animal::~Animal()
{
	std::cout <<  "Animal destructed."<< std::endl;
}

void Animal::makeSound() const
{
	std::cout << "Animal make a sound." << std::endl;
}

std::string Animal::getType() const
{
	return (type);
}
