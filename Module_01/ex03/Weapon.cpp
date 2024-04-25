/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfroidev <sfroidev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 12:16:05 by sfroidev          #+#    #+#             */
/*   Updated: 2024/01/12 10:21:59 by sfroidev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string &type) : _type(type){}

Weapon::~Weapon(){}

const std::string &Weapon::getType() const
{
	return _type;
}

void Weapon::setType(const std::string &type)
{
	_type = type;
}
