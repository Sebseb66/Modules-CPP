/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfroidev <sfroidev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 16:44:12 by sfroidev          #+#    #+#             */
/*   Updated: 2024/03/21 16:45:31 by sfroidev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include "AForm.hpp"
#include <string>
#include <iostream>
#include <stdexcept>

class AForm;

class Bureaucrat
{
	private:

		std::string _name;
		int _grade;
	public:

		Bureaucrat(const Bureaucrat &other);
		Bureaucrat &operator=(const Bureaucrat &other);
		Bureaucrat(const std::string &name, int grade);
		~Bureaucrat();

		const std::string &getName() const;
		int getGrade() const;
		void incrementGrade();
		void decrementGrade();
		void signForm(AForm &form);

		void executeForm(AForm const &form);

		class GradeTooHighException: public std::exception
		{
			public:
				const char *what() const throw()
				{
            				return ("Grade too high\n");
        			}
		};

		class GradeTooLowException: public std::exception
		{
			public:
				const char *what() const throw()
				{
            				return ("Grade too low\n");
        			}
		};

};
std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat);

#endif
