/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfroidev <sfroidev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 11:15:20 by sfroidev          #+#    #+#             */
/*   Updated: 2024/03/26 11:19:21 by sfroidev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

#include <iostream>
#include <cassert>
#include <climits>

int main()
{
	Data extremeData1 = {INT_MAX};
	Data extremeData2 = {INT_MIN};

	Data data1 = {42};
	Data data2 = {-1};
	Data data3 = {100};
	Data* dataList[] = {&data1, &data2, &data3, &extremeData1, &extremeData2, NULL};

	for (int i = 0; i < 6; ++i)
	{
		if (dataList[i] != NULL)
		{
			std::cout << "Testing Data with value: " << dataList[i]->value << std::endl;
		}
		else
		{
			std::cout << "Testing with NULL pointer" << std::endl;
		}

		uintptr_t raw = Serializer::serialize(dataList[i]);
		Data* deserializedData = Serializer::deserialize(raw);

		std::cout << "Original: " << dataList[i] << ", Deserialized: " << deserializedData << std::endl;

		if (dataList[i] != NULL)
		{
			assert(dataList[i]->value == deserializedData->value);
			assert(dataList[i] == deserializedData);

			std::cout << "Data integrity and address check passed" << std::endl;
	}

		std::cout << std::endl;
	}

	return (0);
}