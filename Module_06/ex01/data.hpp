/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfroidev <sfroidev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 14:59:43 by sfroidev          #+#    #+#             */
/*   Updated: 2024/03/25 15:03:39 by sfroidev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP_
# define DATA_HPP_

#include <cstdint>
#include <iostream>
#include <stdint.h>


struct Data 
{
	int n;
};

uintptr_t serialize(Data *ptr);

Data* deserialize(uintptr_t raw);

#endif