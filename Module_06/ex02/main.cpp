/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfroidev <sfroidev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 11:22:38 by sfroidev          #+#    #+#             */
/*   Updated: 2024/03/26 11:22:56 by sfroidev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

#include <iostream>
#include <cstdlib>
#include <ctime>

Base* generate()
{
	int random = rand() % 3;

	switch (random)
	{
		case 0:
			std::cout << "Generated object: A" << std::endl;
			return new A();
		case 1:
			std::cout << "Generated object: B" << std::endl;
			return new B();
		case 2:
			std::cout << "Generated object: C" << std::endl;
			return new C();
		default:
			return NULL;
	}
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
	{
		std::cout << "Identified object as: A" << std::endl;
	}
	else if (dynamic_cast<B*>(p))
	{
		std::cout << "Identified object as: B" << std::endl;
	}
	else if (dynamic_cast<C*>(p))
	{
		std::cout << "Identified object as: C" << std::endl;
	}
	else
	{
		std::cout << "Identified object as: Unknown" << std::endl;
	}
}

void identify(Base& p)
{
	if (dynamic_cast<A*>(&p) != NULL)
	{
		std::cout << "Identified object as: A" << std::endl;
	}
	else if (dynamic_cast<B*>(&p) != NULL)
	{
		std::cout << "Identified object as: B" << std::endl;
	}
	else if (dynamic_cast<C*>(&p) != NULL)
	{
		std::cout << "Identified object as: C" << std::endl;
	}
	else
	{
		std::cout << "Identified object as: Unknown" << std::endl;
	}
}

int main()
{
	srand(static_cast<unsigned>(time(0)));

	for (int i = 0; i < 10; ++i)
	{
		std::cout << "Test #" << (i + 1) << std::endl;

		Base* obj = generate();
		std::cout << "Identification using pointer: ";
		identify(obj);

		std::cout << "Identification using reference: ";
		identify(*obj);

		delete obj;
		std::cout << std::endl;
	}

	return 0;
}