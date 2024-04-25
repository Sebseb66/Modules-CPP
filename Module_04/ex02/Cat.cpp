/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfroidev <sfroidev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 14:04:48 by sfroidev          #+#    #+#             */
/*   Updated: 2024/01/26 14:36:47 by sfroidev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cat.hpp"

Cat::Cat(): Animal()
{
	brain = new Brain();
	type = "Cat";
	std::cout << "Cat constructed." << std::endl;
}

Cat::Cat(const Cat &other): Animal(other)
{
	brain = new Brain(*other.brain);
	std::cout << "cat copied." << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
	if (this != &other)
	{
        	Animal::operator=(other);
        	delete brain;
        	brain = new Brain(*other.brain);
	}
	return (*this);
}

Cat::~Cat()
{
	delete brain;
    	std::cout << "Cat destructed." << std::endl;
}

void Cat::makeSound() const
{
	std::cout <<  "Miaou ..." << std::endl;
}