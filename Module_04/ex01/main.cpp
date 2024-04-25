/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfroidev <sfroidev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 17:13:06 by ecullier          #+#    #+#             */
/*   Updated: 2024/01/25 10:14:04 by sfroidev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{

	std::cout << "creation et suppression des annimaux." << std::endl;

    	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout << dog->getType() << " sound : ";
	dog->makeSound();

	std::cout << cat->getType() << " sound : ";
	cat->makeSound();

	delete dog;
	delete cat;

	std::cout << "copie et affectation." << std::endl;

	Dog originalDog;
	Dog copyDog(originalDog);
	Dog assignedDog = originalDog;

	Cat originalCat;
	Cat copyCat(originalCat);
	Cat assignedCat = originalCat;

	std::cout << "Original Dog: " << originalDog.getType() << " - ";
	originalDog.makeSound();

	std::cout << "Copied Dog: " << copyDog.getType() << " - ";
	copyDog.makeSound();

	std::cout << "Assigned Dog: " << assignedDog.getType() << " - ";
	assignedDog.makeSound();

	std::cout << "Original Cat: " << originalCat.getType() << " - ";
	originalCat.makeSound();

	std::cout << "Copied Cat: " << copyCat.getType() << " - ";
	copyCat.makeSound();

	std::cout << "Assigned Cat: " << assignedCat.getType() << " - ";
	assignedCat.makeSound();

	return 0;

}
