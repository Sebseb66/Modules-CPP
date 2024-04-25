/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfroidev <sfroidev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 17:15:49 by sfroidev          #+#    #+#             */
/*   Updated: 2024/04/16 15:36:14 by sfroidev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


int main()
{
    srand(static_cast<unsigned int>(time(NULL)));

    Span sp(5);

    std::cout << "Ajout de nombres dans le Span." << std::endl;

    try {
        for (int i = 0; i < 5; ++i) {
            int randomValue = rand();
            sp.addNumber(randomValue);
            std::cout << "Nombre " << randomValue << " ajouté." << std::endl;
        }

        std::cout << "\nCalcul du span le plus court." << std::endl;
        std::cout << "Span le plus court: " << sp.shortestSpan() << std::endl;

        std::cout << "\nCalcul du span le plus long." << std::endl;
        std::cout << "Span le plus long: " << sp.longestSpan() << std::endl;

        std::cout << "\nAjout d'une plage de nombres dans le Span." << std::endl;
        int arr[] = {1, 2, 3, 4};
        std::vector<int> range1(arr, arr + sizeof(arr) / sizeof(arr[0]));
        sp.addRange(range1.begin(), range1.end());
        
        std::vector<int>::const_iterator it;
        for (it = range1.begin(); it != range1.end(); ++it) {
            std::cout << *it << " ";
        }
        std::cout << std::endl;

        std::cout << "\nTentative d'ajout d'un autre nombre (doit échouer)." << std::endl;
        sp.addNumber(rand());
    }
    catch (const std::exception& e)
    {
        std::cerr <<  "Exception: " << e.what() << std::endl;
    }
    return 0;
}