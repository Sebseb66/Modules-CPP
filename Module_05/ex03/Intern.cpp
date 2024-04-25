/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfroidev <sfroidev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 16:17:09 by sfroidev          #+#    #+#             */
/*   Updated: 2024/03/26 10:28:05 by sfroidev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"


Intern::Intern() {}

Intern::Intern(const Intern& other)
{
	(void)other;
}

Intern& Intern::operator=(const Intern& other)
{
	(void)other;
	return (*this);
}

Intern::~Intern() {}

AForm *Intern::makeForm(const std::string &formName, const std::string &target) const
{
    AForm *form = NULL;

    if (formName == "shrubbery creation")
    {
        form = new ShrubberyCreationForm(target);
    }
    else if (formName == "robotomy request")
    {
        form = new RobotomyRequestForm(target);
    }
    else if (formName == "presidential pardon")
    {
        form = new PresidentialPardonForm(target);
    }
    else
    {
        std::cerr << "Intern cannot create '" << formName << "' form because it is unknown." <<  std::endl;
        return (NULL);
    }
    std::cout << "Intern creates " << formName << std::endl;
    return (form);
}