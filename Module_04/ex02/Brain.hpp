/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfroidev <sfroidev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 14:04:40 by sfroidev          #+#    #+#             */
/*   Updated: 2024/01/22 16:39:02 by sfroidev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>

class Brain
{

	public:

		std::string ideas[100];

    		Brain();
    		Brain(const Brain &other);
    		Brain &operator=(const Brain &other);
   		~Brain();
};

#endif
