/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfroidev <sfroidev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 13:54:10 by sfroidev          #+#    #+#             */
/*   Updated: 2024/01/22 16:06:51 by sfroidev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal()
{
	_type = "Dog";
	std::cout <<  "Dog constructed." <<  std::endl;
}

Dog::Dog(const Dog &other): Animal(other)
{
	std::cout << "Dog copied." << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
	Animal::operator=(other);
	return (*this);
}

Dog::~Dog()
{
	std::cout <<  "Dog destructed." << std::endl;
}

void Dog::makeSound() const
{
	std::cout <<  "Ouaff ..." << std::endl;
}