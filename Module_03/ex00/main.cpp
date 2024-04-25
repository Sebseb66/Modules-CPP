/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfroidev <sfroidev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 11:36:35 by sfroidev          #+#    #+#             */
/*   Updated: 2024/01/19 10:57:35 by sfroidev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap claptrap("R2_D2");

    claptrap.attack("VADOR");
    claptrap.takeDamage(1);
    claptrap.beRepaired(5);

    return 0;
}
