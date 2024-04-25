/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfroidev <sfroidev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 17:14:04 by sfroidev          #+#    #+#             */
/*   Updated: 2024/04/02 17:14:20 by sfroidev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

#include <vector>
#include <iostream>

#include "easyfind.hpp"
#include <vector>
#include <iostream>

int main()
{
	std::vector<int> vec;
	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);
	vec.push_back(4);
	vec.push_back(5);

	std::cout << "Test avec la valeur 3 (présente dans le vecteur) : " << std::endl;
	try
	{
		std::vector<int>::iterator it = easyfind(vec, 3);
		std::cout << "Valeur trouvée : " << *it << " à la position " << (it - vec.begin()) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Valeur non trouvée." << std::endl;
	}

	std::cout << "\nTest avec la valeur 6 (absente du vecteur) : " << std::endl;
	try
	{
		std::vector<int>::iterator it = easyfind(vec, 6);
		std::cout << "Valeur trouvée : " << *it << " à la position " << (it - vec.begin()) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Valeur non trouvée." << std::endl;
	}

	return 0;
}
