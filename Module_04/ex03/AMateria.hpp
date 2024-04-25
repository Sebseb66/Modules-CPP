/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Amateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfroidev <sfroidev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 13:29:59 by sfroidev          #+#    #+#             */
/*   Updated: 2024/01/25 13:43:39 by sfroidev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>

class ICharacter;

class AMateria
{

public:
	AMateria(std::string const &type);
	AMateria(const AMateria &src);

	virtual ~AMateria();

    AMateria &operator=(const AMateria &rhs);

	std::string const & getType() const;

	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter &target);

protected:
	std::string type;

};

#endif
