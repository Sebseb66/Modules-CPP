/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfroidev <sfroidev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 15:52:42 by sfroidev          #+#    #+#             */
/*   Updated: 2024/03/21 15:53:19 by sfroidev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <iostream>
#include <stdexcept>

class Bureaucrat;

class Form
{
	private:

		const std::string _name;
		bool _isSigned;
		const int _gradeRequiredToSign;
		const int _gradeRequiredToExecute;

	public:

		Form(const Form &other);
		Form &operator=(const Form &other);
		~Form();

		Form(const std::string &name, int gadeToSign, int gradeToExecute);

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

    		const std::string &getName() const;
    		bool getIsSigned() const;
    		int getGradeRequiredToSign() const;
    		int getGradeRequiredToExecute() const;

    		void beSigned(const Bureaucrat &bureaucrat);
};

std::ostream &operator<<(std::ostream &os, const Form &form);

#endif
