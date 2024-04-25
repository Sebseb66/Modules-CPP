/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfroidev <sfroidev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 16:18:05 by sfroidev          #+#    #+#             */
/*   Updated: 2024/03/21 16:22:50 by sfroidev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int	main()
{
	    Bureaucrat highRank("Alice", 1);
    	Bureaucrat lowRank("Bob", 150);
    	Intern someRandomIntern;

    try
    {
        AForm *form;

        std::cout <<  "\nIntern crée un ShrubberyCreationForm\n" << std::endl;
        form = someRandomIntern.makeForm("shrubbery creation", "home");
        if (form)
	    {
            highRank.signForm(*form);
            highRank.executeForm(*form);
            delete form;
        }

        std::cout << "\nIntern crée un RobotomyRequestForm\n" << std::endl;
        form = someRandomIntern.makeForm("robotomy request", "Bender");
        if (form)
	    {
            highRank.signForm(*form);
            highRank.executeForm(*form);
            delete form;
        }

        std::cout << "\nIntern crée un PresidentialPardonForm\n" << std::endl;
        form = someRandomIntern.makeForm("presidential pardon", "Zaphod");
        if (form)
	    {
            highRank.signForm(*form);
            highRank.executeForm(*form);
            delete form;
        }

        std::cout << "\nTentative de création d'un formulaire inconnu\n" << std::endl;
        form = someRandomIntern.makeForm("unknown form", "UnknownTarget");
        if (form)
	    {
            delete form;
        }

    }
    catch(const std::exception &e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return (0);
}
