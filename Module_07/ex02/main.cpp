/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfroidev <sfroidev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 17:03:46 by sfroidev          #+#    #+#             */
/*   Updated: 2024/04/09 16:15:12 by sfroidev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

#include <iostream>

int main()
{
	std::cout << "Création d'un tableau d'entiers de taille 5." << std::endl;
	Array<int> intArray(5);

	std::cout << "\nAffectation de valeurs aux éléments du tableau." << std::endl;
	for (unsigned int i = 0; i < intArray.getSize(); i++)
	{
		intArray[i] = i * 10;
		std::cout << "intArray[" << i << "] = " << intArray[i] << std::endl;
	}

	std::cout << "\nTest d'accès à un élément valide (index 3)." << std::endl;
	std::cout << "Element at index 3: " << intArray[3] << std::endl;

	std::cout << "\nTest d'accès à un élément hors limites (index 6)." << std::endl;
	try
	{
		std::cout << "Element at index 6: " << intArray[6] << std::endl;
	}
	catch (const std::out_of_range& e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}

	std::cout << "\nTest de copie de tableau et d'indépendance des copies." << std::endl;
	Array<int> copiedArray = intArray;
	copiedArray[0] = 100;
	std::cout << "Original array element at index 0: " << intArray[0] << std::endl;
	std::cout << "Copied array element at index 0: " << copiedArray[0] << std::endl;

    std::cout << "Test de construction par défaut." << std::endl;
    Array<int> defaultArray;
    std::cout << "Taille du tableau par défaut : " << defaultArray.getSize() << std::endl;

    std::cout << "\nTest des éléments initialisés par défaut." << std::endl;
    Array<int> defaultInitArray(5);
    for (unsigned int i = 0; i < defaultInitArray.getSize(); i++)
    {
        std::cout << "defaultInitArray[" << i << "] = " << defaultInitArray[i] << std::endl;
    }

    std::cout << "\nTest de profondeur de copie." << std::endl;
    Array<int> deepCopyArray(5);
    for (unsigned int i = 0; i < deepCopyArray.getSize(); i++)
    {
        deepCopyArray[i] = i;
    }
    Array<int> anotherArray = deepCopyArray; // Copie
    anotherArray[0] = 100;
    std::cout << "Valeur dans deepCopyArray après modification de anotherArray : " << deepCopyArray[0] << std::endl;

    std::cout << "\nTest avec différents types de données." << std::endl;
    Array<std::string> stringArray(3);
    stringArray[0] = "Bonjour";
    stringArray[1] = "C++";
    stringArray[2] = "Array";
    for (unsigned int i = 0; i < stringArray.getSize(); i++)
    {
        std::cout << "stringArray[" << i << "] = " << stringArray[i] << std::endl;
    }

	return 0;
}
