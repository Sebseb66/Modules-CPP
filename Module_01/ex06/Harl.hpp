/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfroidev <sfroidev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 21:02:39 by sfroidev          #+#    #+#             */
/*   Updated: 2024/01/12 11:32:47 by sfroidev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <string>
# include <iostream>

class Harl
{
	public:
	Harl();

	~Harl();

	void complain(std::string level);
	
	private:

		void debug(void);
    	void info(void);
    	void warning(void);
    	void error(void);

	
};
