/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfroidev <sfroidev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 11:36:35 by sfroidev          #+#    #+#             */
/*   Updated: 2024/01/19 10:00:01 by sfroidev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    FragTrap frag("YODA");

    frag.attack("JABBA");
    frag.takeDamage(1);
    frag.beRepaired(5);
	frag.highFivesGuys();

    return 0;
}
