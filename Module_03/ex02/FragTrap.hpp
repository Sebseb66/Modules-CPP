/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfroidev <sfroidev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 09:43:45 by sfroidev          #+#    #+#             */
/*   Updated: 2024/01/19 10:57:33 by sfroidev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	private:

		FragTrap();

	public:

    		FragTrap(const std::string &name);
    		FragTrap(const FragTrap &other);

    		FragTrap &operator=(const FragTrap &other);
			
    		~FragTrap();				   

    		void attack(const std::string &target);
    		void highFivesGuys(void);
};
#endif
