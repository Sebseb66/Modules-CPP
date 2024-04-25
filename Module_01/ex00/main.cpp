/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfroidev <sfroidev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 11:29:30 by sfroidev          #+#    #+#             */
/*   Updated: 2024/01/09 12:19:20 by sfroidev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie zombie("Seb");
    zombie.announce();
    
    Zombie  *heap;

    heap = newZombie("Paulo");
    heap->announce();
    randomChump("Marco");

    delete heap;
    return 0;
}