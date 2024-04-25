/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfroidev <sfroidev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 15:11:38 by sfroidev          #+#    #+#             */
/*   Updated: 2024/03/26 10:28:46 by sfroidev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{

 	try
	{
        std::cout << "Test des Rank\n" << std::endl;
		Bureaucrat highRank("High Rank", 0);
	}
    catch (const Bureaucrat::GradeTooHighException &e)
	{
        std::cerr  << "Exception caught: " << e.what() << std::endl;
    }

    try
	{
		Bureaucrat lowRank("Low Rank", 151);
    }
	catch (const Bureaucrat::GradeTooLowException &e)
	{
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    try
	{
        Bureaucrat normal("Normal", 75);
        std::cout << normal << std::endl;
    }
	catch (const std::exception &e)
	{
        std::cerr << "Unexpected exception: " << e.what() << std::endl;
    }
	try
	{
        Bureaucrat normal("Normal", 75);
        std::cout << normal << std::endl;

        std::cout << "Incrementing Normal's grade..." << std::endl;
        normal.incrementGrade();
        std::cout << normal << std::endl;

        std::cout << "Decrementing Normal's grade..." << std::endl;
        normal.decrementGrade();
        std::cout << normal << std::endl;

    }
	catch (const std::exception &e)
	{
        std::cerr << "Unexpected exception: " << e.what() << std::endl;
    }
    try
	{
        std::cout << "Test de depassement des limites\n" << std::endl;

        Bureaucrat veryHighRank("Very High Rank", 2);
        std::cout << veryHighRank << std::endl;

        std::cout << "Incrementing Very High Rank's grade to the max..." << std::endl;
        veryHighRank.incrementGrade();
        veryHighRank.incrementGrade();
        std::cout << veryHighRank << std::endl;

    }
	catch (const Bureaucrat::GradeTooHighException &e)
	{
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }
    try
	{
        Bureaucrat veryLowRank("Very Low Rank", 149);
        std::cout << veryLowRank << std::endl;

        std::cout<< "Decrementing Very Low Rank's grade to the min..." << std::endl;
        veryLowRank.decrementGrade();
        veryLowRank.decrementGrade();
        std::cout << veryLowRank << std::endl;

    }
	catch (const Bureaucrat::GradeTooLowException &e)
	{
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }
	return (0);
}