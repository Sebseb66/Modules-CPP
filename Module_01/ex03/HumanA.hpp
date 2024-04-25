/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfroidev <sfroidev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 12:04:58 by sfroidev          #+#    #+#             */
/*   Updated: 2024/01/12 10:24:05 by sfroidev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanA
{

public:
	HumanA(const std::string &name, Weapon &weapon);

	~HumanA();

	void attack() const;

private:
	std::string _name;
	Weapon &_weapon;

};
