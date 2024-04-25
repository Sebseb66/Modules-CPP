/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfroidev <sfroidev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 12:04:29 by sfroidev          #+#    #+#             */
/*   Updated: 2024/01/12 10:22:00 by sfroidev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class Weapon
{

public:
	Weapon(const std::string &Type);

	~Weapon();
	
	const std::string &getType() const;
	void setType(const std::string &type);

private:
	std::string _type;
};