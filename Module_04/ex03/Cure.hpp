/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfroidev <sfroidev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 13:34:30 by sfroidev          #+#    #+#             */
/*   Updated: 2024/01/25 13:34:38 by sfroidev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{

public:
	Cure();
	Cure(const Cure &src);

	Cure &operator=(const Cure &rhs);

	virtual ~Cure();

	virtual AMateria* clone() const;
	virtual void use(ICharacter &target);

};

#endif
