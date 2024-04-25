/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfroidev <sfroidev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 14:04:27 by sfroidev          #+#    #+#             */
/*   Updated: 2024/01/22 16:38:52 by sfroidev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Brain.hpp"

Brain::Brain()
{
    std::cout <<  "Brain constructed." << std::endl;
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
    std::cout <<  "Brain is destroy." << std::endl;
}
