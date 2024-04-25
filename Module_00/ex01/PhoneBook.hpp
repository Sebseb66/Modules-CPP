/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfroidev <sfroidev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 14:08:49 by sfroidev          #+#    #+#             */
/*   Updated: 2024/01/03 12:26:04 by sfroidev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP


#include "Contact.hpp"
#include <string>

class PhoneBook
{

    public:
        PhoneBook();

        ~PhoneBook();

        void    addContact();
        void    displayContacts();
        void    searchContact();

    private:
        Contact _contacts[8];
        int _contactIndex;

        std::string _truncateString(std::string str) const;
        std::string getNonEmptyLine();
        std::string getPhoneNumberWithDigits();
};

#endif