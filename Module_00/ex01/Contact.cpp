/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfroidev <sfroidev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 12:25:42 by sfroidev          #+#    #+#             */
/*   Updated: 2024/01/03 10:09:04 by sfroidev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {}

Contact::~Contact() {}

std::string Contact::getFirstName() const
{
    return _firstName;
}

std::string Contact::getLastName() const
{
    return _lastName;
}

std::string Contact::getNickname() const
{
    return _nickname;
}

std::string Contact::getPhoneNumber() const
{
    return _phoneNumber;
}

std::string Contact::getDarkestSecret() const
{
    return _darkestSecret;
}

void    Contact::setFirstName(const std::string &fname)
{
    _firstName = fname;
}

void    Contact::setLastName(const std::string &lname)
{
    _lastName = lname;
}

void    Contact::setNickname(const std::string &nname)
{
    _nickname = nname;
}

void    Contact::setPhoneNumber(const std::string &pnumber)
{
    _phoneNumber = pnumber;
}

void    Contact::setDarkestSecret(const std::string &dsecret)
{
    _darkestSecret = dsecret;
}
