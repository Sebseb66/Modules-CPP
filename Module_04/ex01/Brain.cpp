/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfroidev <sfroidev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 15:20:41 by ecullier          #+#    #+#             */
/*   Updated: 2024/01/25 10:09:24 by sfroidev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain constructed." << std::endl;
}

Brain::Brain(const Brain &other)
{
    *this = other;
}

Brain &Brain::operator=(const Brain &other)
{
	if (this != &other)
    	{
        	for (int i = 0; i < 100; ++i)
		{
            		this->ideas[i] = other.ideas[i];
        	}
    	}
    	return (*this);
}

Brain::~Brain()
{
    std::cout << "Brain is destroy." << std::endl;
}
