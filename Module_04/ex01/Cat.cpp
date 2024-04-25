/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfroidev <sfroidev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 17:59:07 by ecullier          #+#    #+#             */
/*   Updated: 2024/01/25 10:09:39 by sfroidev         ###   ########.fr       */
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
	std::cout << "Miaou ..."<< std::endl;
}