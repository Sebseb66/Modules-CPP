/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfroidev <sfroidev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 13:52:46 by sfroidev          #+#    #+#             */
/*   Updated: 2024/01/22 16:05:44 by sfroidev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cat.hpp"

Cat::Cat(): Animal()
{
	_type = "Cat";
	std::cout << "Cat constructed." << std::endl;
}

Cat::Cat(const Cat &other): Animal(other)
{
	std::cout << "cat copied." << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
	Animal::operator=(other);
	return (*this);
}

Cat::~Cat()
{
    std::cout << "Cat destructed." << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Miaou ..." << std::endl;
}