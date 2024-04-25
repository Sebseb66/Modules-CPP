/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfroidev <sfroidev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 16:07:17 by sfroidev          #+#    #+#             */
/*   Updated: 2024/03/21 16:08:56 by sfroidev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main()
{
 	try
	{
        	Bureaucrat highRank("Alice", 1);
        	Bureaucrat lowRank("Bob", 150);

        	ShrubberyCreationForm shrubberyForm("home");
        	RobotomyRequestForm robotomyForm("target");
        	PresidentialPardonForm pardonForm("criminal");

       		std::cout << highRank << std::endl;
        	std::cout << lowRank << std::endl;

		std::cout << "\nTest ShrubberyCreationForm\n" << std::endl;
        	highRank.signForm(shrubberyForm);
        	highRank.executeForm(shrubberyForm);

		std::cout << "\nTest RobotomyRequestForm\n" << std::endl;
        	highRank.signForm(robotomyForm);
        	highRank.executeForm(robotomyForm);

		std::cout << "\nTest PresidentialPardonForm\n" << std::endl;
        	highRank.signForm(pardonForm);
        	highRank.executeForm(pardonForm);

		std::cout << "\nTest with lowRank Bureaucrat\n" << std::endl;
        	lowRank.signForm(shrubberyForm);
        	lowRank.executeForm(shrubberyForm);

    	}
	catch(const std::exception& e)
	{
        	std::cerr<< "Exception caught: " << e.what() << std::endl;
    	}

    	return (0);
}
