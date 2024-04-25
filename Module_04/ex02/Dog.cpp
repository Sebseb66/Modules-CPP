/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfroidev <sfroidev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 17:59:18 by ecullier          #+#    #+#             */
/*   Updated: 2024/01/26 14:38:43 by sfroidev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal()
{
	brain = new Brain();
	type = "Dog";
	std::cout << "Dog constructed." << std::endl;
}

Dog::Dog(const Dog &other): Animal(other)
{
	brain = new Brain(*other.brain);
	std::cout << "Dog copied." << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
	if (this != &other)
	{
        	Animal::operator=(other);
        	delete brain;
        	brain = new Brain(*other.brain);
    	}
    	return (*this);
}

Dog::~Dog()
{
	delete brain;
	std::cout << "Dog destructed." << std::endl;
}


void Dog::makeSound() const
{
	std::cout << "Ouaff ..." << std::endl;
}
