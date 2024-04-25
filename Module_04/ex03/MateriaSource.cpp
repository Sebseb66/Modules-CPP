/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfroidev <sfroidev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 13:38:12 by sfroidev          #+#    #+#             */
/*   Updated: 2024/01/25 13:41:31 by sfroidev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "AMateria.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; ++i)
	{
		learnedMaterias[i] = 0;
	}
}

MateriaSource::MateriaSource(const MateriaSource &src)
{
	*this = src;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &rhs)
{
    if (this != &rhs)
    {
        // Supprime les AMateria existants
        for (int i = 0; i < 4; ++i)
        {
            delete learnedMaterias[i];
        }

        // Copie les AMateria de rhs
        for (int i = 0; i < 4; ++i)
        {
            if (rhs.learnedMaterias[i] != 0)
            {
                this->learnedMaterias[i] = rhs.learnedMaterias[i]->clone();
            }
            else
            {
                this->learnedMaterias[i] = 0;
            }
        }
    }
    return *this;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; ++i)
	{
		if (learnedMaterias[i] != 0)
		{
			delete learnedMaterias[i];
		}
	}
}

void MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < 2; ++i)
	{
		if (learnedMaterias[i] == NULL)
		{
			learnedMaterias[i] = m;
			std::cout << "Learned Materia of type " << m->getType() << std::endl;
			return ;
		}
	}
	std::cout << "Materia Source is full, cannot learn more Materia" << std::endl;
	delete m;
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; ++i)
	{
		if (learnedMaterias[i] != 0 && learnedMaterias[i]->getType() == type)
		{
			return learnedMaterias[i]->clone();
		}
	}
	std::cout << "No Materia of type " << type << " learned" << std::endl;
	return 0;
}

