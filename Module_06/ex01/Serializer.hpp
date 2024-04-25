/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfroidev <sfroidev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 11:19:55 by sfroidev          #+#    #+#             */
/*   Updated: 2024/03/26 11:19:59 by sfroidev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <cstddef>
#include <iostream>

struct Data
{
	int value;
};

typedef size_t uintptr_t;

class Serializer
{

public:
	Serializer();
	Serializer(const Serializer& other);

	Serializer& operator=(const Serializer& other);

	~Serializer();

	static uintptr_t serialize(Data* ptr);
	static Data* deserialize(uintptr_t raw);

};

#endif
