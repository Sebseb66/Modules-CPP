/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfroidev <sfroidev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 15:11:17 by sfroidev          #+#    #+#             */
/*   Updated: 2024/03/21 15:17:54 by sfroidev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <stdexcept>

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
