/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfroidev <sfroidev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 16:14:02 by sfroidev          #+#    #+#             */
/*   Updated: 2024/01/10 10:28:11 by sfroidev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::Zombie(std::string name) : name(name) {}


void Zombie::announce(void) const
{
    std::cout << "My name is " << name << " and i'm a Zombie ! " << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Zombie " << name << " has been destroyed..." << std::endl;
}