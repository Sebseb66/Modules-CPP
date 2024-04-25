/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfroidev <sfroidev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 13:50:02 by sfroidev          #+#    #+#             */
/*   Updated: 2024/01/22 16:03:54 by sfroidev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Animal.hpp"

Animal::Animal() : _type("Animal")
{
	std::cout << "Animal constructed." << std::endl;
}

Animal::Animal(const Animal &other): _type(other._type)
{
	std::cout << "Animal copied." << std::endl;
}

Animal &Animal::operator=(const Animal &other)
{
	if (this != &other)
	{
		this->_type= other._type;
	}
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal destructed."<< std::endl;
}

void Animal::makeSound() const
{
	std::cout << "Animal make a sound." << std::endl;
}

std::string Animal::getType() const
{
	return (_type);
}