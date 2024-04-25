/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfroidev <sfroidev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 13:29:44 by sfroidev          #+#    #+#             */
/*   Updated: 2024/01/25 14:00:31 by sfroidev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria(std::string const & type) : type(type)
{
}

AMateria::AMateria(const AMateria & src) : type(src.type)
{
}

AMateria & AMateria::operator=(const AMateria & rhs)
{
	if (this != &rhs)
	{
		this->type = rhs.type;
	}
	 return *this;
}

AMateria::~AMateria()
{
}

std::string const & AMateria::getType() const
{
	return this->type;
}

void AMateria::use(ICharacter& target)
{
	(void)target;
}