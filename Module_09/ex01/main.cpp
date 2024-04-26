/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfroidev <sfroidev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 17:24:02 by sfroidev          #+#    #+#             */
/*   Updated: 2024/04/02 17:24:57 by sfroidev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

#include <iostream>

int main(int ac, char** av)
{
	if (ac != 2)
	{
		std::cerr << "Usage: " << av[0] << " \"expression\"" << std::endl;
		return 1;
	}

	RPN calculator;
	int result = calculator.evaluate(av[1]);

	if (result != -1)
	{
		std::cout << result << std::endl;
	}

	return 0;
}

