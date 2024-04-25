/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfroidev <sfroidev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 10:59:07 by sfroidev          #+#    #+#             */
/*   Updated: 2024/01/10 10:59:12 by sfroidev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"


Zombie* zombieHorde(int hordeSize, std::string name)
{
    Zombie* horde = new Zombie[hordeSize];

    for(int i = 0; i < hordeSize; ++i)
    {
       new(&horde[i]) Zombie(name);
    }
    return horde;
}