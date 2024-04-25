/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfroidev <sfroidev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 15:20:33 by ecullier          #+#    #+#             */
/*   Updated: 2024/01/25 10:05:44 by sfroidev         ###   ########.fr       */
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