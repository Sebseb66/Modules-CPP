/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfroidev <sfroidev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 14:59:04 by sfroidev          #+#    #+#             */
/*   Updated: 2024/03/25 15:30:38 by sfroidev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"


int main(int ac, char **av) 
{
	if (ac != 2) 
	{
		std::cerr << "Usage: " << av[0] << " <literal_to_convert>" << std::endl;
		return 1;
	}
	try
	{
		{
			ScalarConverter::convert(av[1]);
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
		return (1);
	}
	return (0);
}