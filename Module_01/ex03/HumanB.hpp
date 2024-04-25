/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfroidev <sfroidev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 12:07:39 by sfroidev          #+#    #+#             */
/*   Updated: 2024/01/12 10:23:42 by sfroidev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanB
{

public:
	HumanB(const std::string &name);

	~HumanB();

	void setWeapon(Weapon &weapon);
	void attack() const;

private:
	std::string _name;
	Weapon * _weapon;

};
