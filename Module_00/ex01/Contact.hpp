/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfroidev <sfroidev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 12:36:35 by sfroidev          #+#    #+#             */
/*   Updated: 2024/01/03 09:55:00 by sfroidev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact
{

    public:
        Contact();

        ~Contact();

        std::string getFirstName() const;
        std::string getLastName() const;
        std::string getNickname() const;
        std::string getPhoneNumber() const;
        std::string getDarkestSecret() const;

        void    setFirstName(const std::string &fname);
        void    setLastName(const std::string &lname);
        void    setNickname(const std::string &nname);
        void    setPhoneNumber(const std::string &pnumber);
        void    setDarkestSecret(const std::string &dsecret);

        private:
            std::string _firstName;
            std::string _lastName;
            std::string _nickname;
            std::string _phoneNumber;
            std::string _darkestSecret;
};

#endif