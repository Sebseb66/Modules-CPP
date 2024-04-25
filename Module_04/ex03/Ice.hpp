/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfroidev <sfroidev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 13:35:12 by sfroidev          #+#    #+#             */
/*   Updated: 2024/01/25 13:41:50 by sfroidev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{

public:
	Ice();
	Ice(const Ice &src);

	Ice &operator=(const Ice &rhs);

	virtual ~Ice();

	virtual AMateria* clone() const;
	virtual void use(ICharacter &target);

};

#endif
