/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfroidev <sfroidev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 17:01:49 by sfroidev          #+#    #+#             */
/*   Updated: 2024/04/02 17:05:05 by sfroidev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <stdexcept>

template <typename T>

class Array
{

public:
	Array();
	Array(unsigned int n);
	Array(const Array& other);

	Array& operator=(const Array& other);
	T& operator[](unsigned int index);
	const T& operator[](unsigned int index) const;

	~Array();

	unsigned int getSize() const;

private:
	T* _elements;
	unsigned int _size;

};

#include "Array.tpp"

#endif
