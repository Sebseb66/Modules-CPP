/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfroidev <sfroidev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 12:21:12 by sfroidev          #+#    #+#             */
/*   Updated: 2024/01/12 10:21:57 by sfroidev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(const std::string &humanName) : _name(humanName), _weapon(nullptr) {}

HumanB::~HumanB(){}

void HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}

void HumanB::attack() const
{
	if (_weapon)
	{
		std::cout << _name << " attack whit their " << _weapon->getType() << std::endl;
	}
	else
	{
		std::cout << _name << " attack whit bare hands ! " << std::endl;
	}
}