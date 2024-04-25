/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfroidev <sfroidev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 11:36:35 by sfroidev          #+#    #+#             */
/*   Updated: 2024/01/19 10:57:34 by sfroidev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ScavTrap scav("C_3PO");

    scav.attack("PALPATINE");
    scav.takeDamage(1);
    scav.beRepaired(5);
	scav.guardGate();

    return 0;
}
