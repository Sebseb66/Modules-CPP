/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfroidev <sfroidev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 13:55:01 by sfroidev          #+#    #+#             */
/*   Updated: 2024/01/25 10:14:32 by sfroidev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    	const Animal *genericAnimal = new Animal();
	std::cout << genericAnimal->getType() << " " << std::endl;
	genericAnimal->makeSound();

    	const Animal *dog = new Dog();
	std::cout << dog->getType() << " " << std::endl;
	dog->makeSound();

    	const Animal *cat = new Cat();
    	std::cout << cat->getType() << " " << std::endl;
	cat->makeSound();

    	const WrongAnimal *wrongAnimal = new WrongAnimal();
	std::cout << wrongAnimal->getType() << " " << std::endl;
	wrongAnimal->makeSound();

    	const WrongAnimal *wrongCat = new WrongCat();
	std::cout << wrongCat->getType() << " " << std::endl;
	wrongCat->makeSound();

    	delete genericAnimal;
    	delete dog;
    	delete cat;
    	delete wrongAnimal;
    	delete wrongCat;

    	return 0;
}
