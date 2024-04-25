/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfroidev <sfroidev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 16:14:38 by sfroidev          #+#    #+#             */
/*   Updated: 2024/01/10 10:30:45 by sfroidev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>

class Zombie
{
    public:
		Zombie();
        Zombie(std::string name);
		~Zombie();
		void announce() const ;
	
	private:
		std::string name;

};

Zombie* zombieHorde(int N, std::string name);
