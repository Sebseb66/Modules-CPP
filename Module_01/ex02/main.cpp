/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfroidev <sfroidev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 11:04:41 by sfroidev          #+#    #+#             */
/*   Updated: 2024/01/15 09:29:33 by sfroidev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "Memory adress of the string variable : " << &str << std::endl;
	std::cout << "Memory adress held by stringPTR : " << stringPTR << std::endl;
	std::cout << "Memory adress held by StringREF : " << &stringREF << std::endl;

	std::cout << "Value of the string variable : " << str << std::endl;
	std::cout << "Value pointed to by stringPTR :" << *stringPTR << std::endl;
	std::cout << "Value referred to by stringREF : " << stringREF << std::endl;

	return 0;
}