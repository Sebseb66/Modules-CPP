/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfroidev <sfroidev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 17:17:52 by sfroidev          #+#    #+#             */
/*   Updated: 2024/04/16 16:07:11 by sfroidev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>

int main()
{
	MutantStack<int> mstack;

	std::cout << "\nAjout de nombres dans MutantStack." << std::endl;
	mstack.push(5);
	std::cout << "Nombre 5 ajouté." << std::endl;
	mstack.push(17);
	std::cout << "Nombre 17 ajouté." << std::endl;

	std::cout << "\nValeur au sommet : " << mstack.top() << std::endl;

	mstack.pop();
	std::cout << "Element au sommet retiré, taille actuelle : " << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(83);
	mstack.push(737);
	std::cout << "\nNombres 3, 83 et 737 ajoutés." << std::endl;
	std::cout << "Taille actuelle : " << mstack.size() << std::endl;

	std::cout << "\nItération sur les éléments de MutantStack :" << std::endl;

	for (MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); ++it)
	{
		std::cout << *it << std::endl;
	}
	

	return 0;
}

// int main()
// {
//     std::list<int> myList;

//     std::cout << "\nAjout de nombres dans std::list." << std::endl;
//     myList.push_back(5);
//     std::cout << "Nombre 5 ajouté." << std::endl;
//     myList.push_back(17);
//     std::cout << "Nombre 17 ajouté." << std::endl;

//     std::cout << "\nValeur au sommet : " << myList.back() << std::endl;

//     myList.pop_back();
//     std::cout << "Element au sommet retiré, taille actuelle : " << myList.size() << std::endl;

//     myList.push_back(3);
//     myList.push_back(83);
//     myList.push_back(737);
//     std::cout << "\nNombres 3, 83 et 737 ajoutés." << std::endl;
//     std::cout << "Taille actuelle : " << myList.size() << std::endl;

//     std::cout << "\nItération sur les éléments de std::list :" << std::endl;

//     for (std::list<int>::iterator it = myList.begin(); it != myList.end(); ++it)
//     {
//         std::cout << *it << std::endl;
//     }

//     return 0;
// }
