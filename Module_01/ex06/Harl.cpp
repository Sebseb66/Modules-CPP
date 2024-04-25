/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfroidev <sfroidev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 21:02:44 by sfroidev          #+#    #+#             */
/*   Updated: 2024/01/12 20:58:53 by sfroidev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){}

Harl::~Harl(){}

void Harl::debug(void)
{
	std::cout << "[DEBUG] \n I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!\n";
}
void Harl::info(void)
{
    std::cout << "[INFO] \n I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void Harl::warning(void)
{
    std::cout << "[WARNING] \n I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n";
}

void Harl::error(void)
{
    std::cout << "[ERROR] \n This is unacceptable! I want to speak to the manager now.\n";
}


void Harl::complain(std::string level) 
{
	void (Harl::*complaint[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	int levelIndex = 0;

	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i])
		{
			levelIndex = i;
			break ;
		}
	}

    switch (levelIndex)
    {
       case 0:
			(this->*complaint[0])();
		case 1:
			(this->*complaint[1])();
		case 2:
			(this->*complaint[2])();	
		case 3:
			(this->*complaint[3])();
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}