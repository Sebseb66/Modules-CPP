/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfroidev <sfroidev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 14:16:03 by sfroidev          #+#    #+#             */
/*   Updated: 2024/01/03 11:17:25 by sfroidev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <string>
#include <climits>

int main()
{
    PhoneBook   PhoneBook;
    std::string command;

    while(true)
    {
        std::cout << "Enter command (ADD, SEARCH or EXIT) : ";
        std::cin >> command;
        // std::getline(std::cin, command);
        std::cin.ignore(INT_MAX, '\n');
        // if (std::cin.fail())
        // {
        //     std::cin.clear();
        //     std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        //     continue;
        // }

        if (command == "EXIT")
        {
            break;
        }
        else if (command == "ADD")
        {
            PhoneBook.addContact();
        }
        else if (command == "SEARCH")
        {
            PhoneBook.searchContact();
        }
        else
        {
            std::cout << "Invalid command, choose ADD, SEARCH or EXIT" << std::endl;
        }
    }
    return 0;
}
