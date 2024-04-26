/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfroidev <sfroidev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 17:25:55 by sfroidev          #+#    #+#             */
/*   Updated: 2024/04/02 17:27:16 by sfroidev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

#include <iostream>
#include <vector>
#include <list>
#include <cstdlib>

int main(int argc, char** argv) {
    if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " [list of positive integers]" << std::endl;
        return 1;
    }

    std::vector<int> numbersVector;
    std::list<int> numbersList;

    for (int i = 1; i < argc; ++i) {
        int value = std::atoi(argv[i]);
        if (value < 0) {
            std::cerr << "Error: Only positive integers are allowed." << std::endl;
            return 1;
        }
        numbersVector.push_back(value);
        numbersList.push_back(value);
    }

    PmergeMe pmergeMe;

    std::cout << "\nTri pour std::vector: " << std::endl;
    pmergeMe.sortAndDisplay(numbersVector);

    std::cout << "Tri pour std::list: " << std::endl;
    pmergeMe.sortAndDisplay(numbersList);

    return 0;
}
