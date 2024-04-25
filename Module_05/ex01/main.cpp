/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfroidev <sfroidev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 16:43:32 by sfroidev          #+#    #+#             */
/*   Updated: 2024/03/21 16:45:33 by sfroidev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main()
{
 	try
	{
		Bureaucrat highRank("High Rank", 0);
	}
    	catch (const Bureaucrat::GradeTooHighException &e)
	{
        	std::cerr << "Exception caught: " << e.what() << std::endl;
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
	{	std::cout << "\nTest de depasssement des limites\n" << std::endl;
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

        	std::cout << "Decrementing Very Low Rank's grade to the min..." << std::endl;
        	veryLowRank.decrementGrade();
        	veryLowRank.decrementGrade();
        	std::cout << veryLowRank << std::endl;

    	}
	catch (const Bureaucrat::GradeTooLowException &e)
	{
        	std::cerr << "Exception caught: " << e.what() << std::endl;
    	}

	try
	{	std::cout << "\ntest de FORM\n"<< std::endl;
        	Form formA("FormA", 50, 30);
        	Bureaucrat bureaucrat("Alice", 45);

        	std::cout << formA << std::endl;
        	std::cout << bureaucrat << std::endl;

        	bureaucrat.signForm(formA);

        	std::cout << formA << std::endl;
    	}
	catch (const std::exception &e)
	{
        	std::cerr << "Exception caught: " << e.what() << std::endl;
    	}

    	try
	{
        	Form formB("FormB", 40, 20);
        	Bureaucrat bureaucrat("Bob", 45);

        	std::cout << formB << std::endl;
        	std::cout << bureaucrat << std::endl;

        	bureaucrat.signForm(formB);

        	std::cout << formB << std::endl;
	}
	catch (const Form::GradeTooLowException &e)
	{
        	std::cerr << "Form exception caught: " << e.what() << std::endl;
    	}
	catch (const std::exception &e)
	{
        	std::cerr << "Exception caught: " << e.what() << std::endl;
    	}

	return (0);
}