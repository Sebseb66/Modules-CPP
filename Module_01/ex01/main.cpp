/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfroidev <sfroidev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 16:15:31 by sfroidev          #+#    #+#             */
/*   Updated: 2024/01/12 15:06:03 by sfroidev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int hordeSize = 10;
	std::string zombieName = "Jean-Claude";

    Zombie* myHorde = zombieHorde (hordeSize, zombieName);

    for (int i = 0; i < hordeSize; ++i)
    {
        myHorde[i].announce();
    }

    delete[] myHorde;

    return 0;
}