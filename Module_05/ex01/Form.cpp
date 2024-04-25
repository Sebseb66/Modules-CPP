/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfroidev <sfroidev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 15:51:33 by sfroidev          #+#    #+#             */
/*   Updated: 2024/03/21 15:52:29 by sfroidev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"


Form::Form(const std::string &name, int gradeToSign, int gradeToExecute)
: _name(name), _isSigned(false), _gradeRequiredToSign(gradeToSign),
	_gradeRequiredToExecute(gradeToExecute)
{
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw GradeTooHighException();
    if (gradeToSign > 150 || gradeToExecute > 150)
        throw GradeTooLowException();
}

Form::Form(const Form &other)
: _name(other._name), _isSigned(other._isSigned),
	_gradeRequiredToSign(other._gradeRequiredToSign),
	_gradeRequiredToExecute(other._gradeRequiredToExecute) {}


Form &Form::operator=(const Form &other)
{
    if (this != &other)
    {
        const_cast<std::string&>(this->_name) = other._name;
        this->_isSigned = other._isSigned;
        const_cast<int&>(this->_gradeRequiredToSign) = other._gradeRequiredToSign;
        const_cast<int&>(this->_gradeRequiredToExecute) = other._gradeRequiredToExecute;
    }
    return (*this);
}

Form::~Form() {}

const std::string &Form::getName() const
{
    return (_name);
}

bool Form::getIsSigned() const
{
    return (_isSigned);
}

int Form::getGradeRequiredToSign() const
{
    return (_gradeRequiredToSign);
}

int Form::getGradeRequiredToExecute() const
{
    return (_gradeRequiredToExecute);
}

void Form::beSigned(const Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() <= _gradeRequiredToSign)
        _isSigned = true;
    else
        throw GradeTooLowException();
}

std::ostream &operator<<(std::ostream &os, const Form &form)
{
    os << "Form " << form.getName() << " is " <<
    	(form.getIsSigned() ? "signed" : "not signed")
       << ", grade required to sign: " << form.getGradeRequiredToSign()
       << ", grade required to execute: " << form.getGradeRequiredToExecute();
    return (os);
}
