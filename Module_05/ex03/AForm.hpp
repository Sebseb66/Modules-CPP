/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfroidev <sfroidev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 16:15:13 by sfroidev          #+#    #+#             */
/*   Updated: 2024/03/21 16:15:51 by sfroidev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP


#include <string>
#include <iostream>
#include <stdexcept>

class Bureaucrat;

class AForm
{
	private:

		const std::string _name;
		bool _isSigned;
		const int _gradeRequiredToSign;
		const int _gradeRequiredToExecute;

	public:

		AForm(const AForm &other);
		AForm &operator=(const AForm &other);
		virtual ~AForm();

		AForm(const std::string &name, int gadeToSign, int gradeToExecute);

		class FormNotSignedException: public std::exception
		{
			public:
				const char *what() const throw()
				{
            				return ("Form not signed");
        			}
		};

		class GradeTooHighException: public std::exception
		{
			public:
				const char *what() const throw()
				{
            				return ("Grade too high");
        			}
		};

		class GradeTooLowException: public std::exception
		{
			public:
				const char *what() const throw()
				{
            				return ("Grade too low");
        			}
		};

		virtual void execute(Bureaucrat const &executor) const = 0;
    		const std::string &getName() const;
    		bool getIsSigned() const;
    		int getGradeRequiredToSign() const;
    		int getGradeRequiredToExecute() const;

    		void beSigned(const Bureaucrat &bureaucrat);
};

std::ostream &operator<<(std::ostream &os, const AForm &form);

#endif