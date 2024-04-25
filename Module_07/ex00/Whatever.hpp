/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfroidev <sfroidev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 16:57:51 by sfroidev          #+#    #+#             */
/*   Updated: 2024/04/02 17:00:09 by sfroidev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T>

void swap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

template <typename T>
T min(const T &a, const T &b)
{
    if (a < b)
	{
        return a;
    }
	else
	{
        return b;
    }
}

template <typename T>

T max(const T &a, const T &b)
{
    if (a > b)
	{
        return a;
    }
	else
	{
        return b;
    }
}

#endif
