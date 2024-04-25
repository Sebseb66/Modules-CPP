/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfroidev <sfroidev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 13:50:02 by sfroidev          #+#    #+#             */
/*   Updated: 2024/01/26 14:35:48 by sfroidev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Animal.hpp"

Animal::Animal() : type("Animal")
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
	std::cout << "Animal destructed."<< std::endl;
}

std::string Animal::getType() const
{
	return (type);
}