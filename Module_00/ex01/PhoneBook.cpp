/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfroidev <sfroidev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 14:14:21 by sfroidev          #+#    #+#             */
/*   Updated: 2024/01/08 08:30:39 by sfroidev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>
#include <string>
#include <limits>
#include <cctype>

PhoneBook::PhoneBook() : _contactIndex(0) {}

PhoneBook::~PhoneBook() {}



std::string PhoneBook::getPhoneNumberWithDigits()
{
    std::string phoneNumber;
    bool hasDigits;

    do
    {
        
        std::getline(std::cin, phoneNumber);

        hasDigits = false;
        for (std::size_t i = 0; i < phoneNumber.size(); ++i)
        {
            if (std::isdigit(phoneNumber[i]))
            {
                hasDigits = true;
                break;
            }
        }

        if (!hasDigits)
        {
            std::cout << "Invalid input. Phone number must contain at least one digit. \n";
            std::cout << "Enter phone number: ";
        }
    } while (!hasDigits);

    return phoneNumber;
}


void    PhoneBook::addContact()
{
    Contact newContact;

    std::cout << "Enter first name : ";
    newContact.setFirstName(getNonEmptyLine());

    std::cout << "Enter last name : ";
    newContact.setLastName(getNonEmptyLine());

    std::cout << "Enter nickname : ";
    newContact.setNickname(getNonEmptyLine());

    std::cout << "Enter phone number : ";
    newContact.setPhoneNumber(getPhoneNumberWithDigits());

    std::cout << "Enter darkest secret : ";
    newContact.setDarkestSecret(getNonEmptyLine());

    _contacts[_contactIndex % 8] = newContact;
    _contactIndex++;
}

  
    std::string PhoneBook::getNonEmptyLine()
{
    std::string line;
    do
    {
        std::getline(std::cin, line);
        if (!line.empty())
        {
            break;
        }
        std::cout << "Invalid input. Please enter a non-empty value: ";
    } while (true);
    return line;
}

const int COLUMN_WIDTH = 10;

void    PhoneBook::displayContacts()
{
    std::cout << std::setw(COLUMN_WIDTH) << "Index" << "|";
    std::cout << std::setw(COLUMN_WIDTH) << "First Name" << "|";
    std::cout << std::setw(COLUMN_WIDTH) << "Last Name" << "|";
    std::cout << std::setw(COLUMN_WIDTH) << "Nickname" << "|" << std::endl;

    for (int i = 0; i < std::min(_contactIndex, 8); ++i)
    {
        std::cout << std::setw(COLUMN_WIDTH) << i << "|";
        std::cout << std::setw(COLUMN_WIDTH) << _truncateString(_contacts[i].getFirstName()) << "|";
        std::cout << std::setw(COLUMN_WIDTH) << _truncateString(_contacts[i].getLastName()) << "|";
        std::cout << std::setw(COLUMN_WIDTH) << _truncateString(_contacts[i].getNickname()) << "|" << std::endl;
    }
}

void    PhoneBook::searchContact()
{
    displayContacts();

    std::cout <<"Enter the index of the contact to view : ";

    int index;

    std::cin >> index;

    if(std::cin.fail() || index < 0 || index >= std::min(_contactIndex, 8))
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Invalid index." << std::endl;
        return;
    }

    Contact &contact = _contacts[index];

    std::cout << "First Name : " << contact.getFirstName() << std::endl;
    std::cout << "Last Name : " << contact.getLastName() << std::endl;
    std::cout << "Nickname : " << contact.getNickname() << std::endl;
    std::cout << "Phone Number : " << contact.getPhoneNumber() << std::endl;
    std::cout << "Darkest Secret : " << contact.getDarkestSecret() << std::endl;
}

std::string PhoneBook:: _truncateString(std::string str) const
{
    if (str.length() > 10)
    {
        str = str.substr(0, 9) + ".";
    }
    return str;
}