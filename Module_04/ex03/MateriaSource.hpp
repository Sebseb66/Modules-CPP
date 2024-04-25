/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfroidev <sfroidev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 13:39:40 by sfroidev          #+#    #+#             */
/*   Updated: 2024/01/25 13:39:43 by sfroidev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria *learnedMaterias[4];

public:
	MateriaSource();
	MateriaSource(const MateriaSource & src);

	MateriaSource & operator=(const MateriaSource & rhs);

	virtual ~MateriaSource();

	virtual void learnMateria(AMateria* m);
	virtual AMateria* createMateria(std::string const & type);

};

#endif
