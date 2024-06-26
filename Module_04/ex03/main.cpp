/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfroidev <sfroidev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 13:35:40 by sfroidev          #+#    #+#             */
/*   Updated: 2024/01/25 13:36:49 by sfroidev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include <iostream>

int main()
{
    IMateriaSource* src = new MateriaSource();

    std::cout << "\nLearning Materias Ice and Cure:\n" << std::endl;
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    std::cout << "\nTrying to learn a third Materia (Ice) when the source is full\n" << std::endl;
    src->learnMateria(new Ice());

    ICharacter* me = new Character("me");

    std::cout << "\nCreating and equipping Materias: Ice and Cure" << std::endl;
    AMateria* tmp;

    tmp = src->createMateria("ice");
    if (tmp) me->equip(tmp);
    else delete tmp;

    tmp = src->createMateria("cure");
    if (tmp) me->equip(tmp);
    else delete tmp;

    std::cout << "\nTrying to equip an unknown Materia type (fire)" << std::endl;
    tmp = src->createMateria("fire");
    if (tmp) me->equip(tmp);
    else std::cout << "No 'fire' Materia found, none equipped" << std::endl;

    ICharacter* bob = new Character("bob");

    std::cout << "\nUsing equipped Materias on 'bob'" << std::endl;
    me->use(0, *bob);
    me->use(1, *bob);

    Character* characterMe = dynamic_cast<Character*>(me);

    std::cout << "\nTesting cloning of Materias:" << std::endl;
    tmp = src->createMateria("ice");
    if (tmp) 
	{
        AMateria* iceClone = tmp->clone();
        delete tmp;

        if (iceClone && !characterMe->isInventoryFull()) 
		{
            me->equip(iceClone);
        } else 
		{
            delete iceClone;
        }
    }

    std::cout << "\nTesting unequip and reequip mechanisms" << std::endl;
    AMateria* removedMateria = NULL;

    if (characterMe != NULL && characterMe->getInventorySlot(0) != NULL) 
	{
        removedMateria = characterMe->getInventorySlot(0);
        characterMe->unequip(0);
    }

    delete removedMateria;

    std::cout << "\nTesting inventory full scenario" << std::endl;
    for (int i = 0; i < 4; i++) 
	{
        AMateria* newIce = new Ice();
        if (!characterMe->isInventoryFull()) 
		{
            me->equip(newIce);
        } else
		{
            delete newIce;
        }
    }

    std::cout << "\nTesting Character copying" << std::endl;
    Character* copyOfMe = dynamic_cast<Character*>(me);
    if (copyOfMe) 
	{
        Character* copyCharacter = new Character(*copyOfMe);
        copyCharacter->use(0, *bob);
        delete copyCharacter;
    }

    std::cout << "\nCleaning up memory" << std::endl;
    delete bob;
    delete me;
    delete src;

    return 0;
}
