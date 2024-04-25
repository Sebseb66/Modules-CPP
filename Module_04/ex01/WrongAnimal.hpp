/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfroidev <sfroidev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 10:31:12 by ecullier          #+#    #+#             */
/*   Updated: 2024/01/25 10:16:11 by sfroidev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define  WRONGANIMAL_HPP

#include <string>
#include <iostream>

class WrongAnimal
{
	protected:

		std::string type;

	public:

		WrongAnimal();
		WrongAnimal(const WrongAnimal &other);
		WrongAnimal &operator=(const WrongAnimal &other);
		virtual ~WrongAnimal();
		void makeSound() const;
		std:: string getType() const;
};
#endif