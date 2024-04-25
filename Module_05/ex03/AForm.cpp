/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfroidev <sfroidev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 16:14:42 by sfroidev          #+#    #+#             */
/*   Updated: 2024/03/21 16:22:52 by sfroidev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(const std::string &name, int gradeToSign, int gradeToExecute)
: _name(name), _isSigned(false), _gradeRequiredToSign(gradeToSign),
	_gradeRequiredToExecute(gradeToExecute)
{
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw GradeTooHighException();
    if (gradeToSign > 150 || gradeToExecute > 150)
        throw GradeTooLowException();
}

AForm::AForm(const AForm &other)
: _name(other._name), _isSigned(other._isSigned),
	_gradeRequiredToSign(other._gradeRequiredToSign),
	_gradeRequiredToExecute(other._gradeRequiredToExecute) {}

AForm &AForm::operator=(const AForm &other)
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

AForm::~AForm() {}

const std::string &AForm::getName() const
{
    return (_name);
}


bool AForm::getIsSigned() const
{
    return (_isSigned);
}

int AForm::getGradeRequiredToSign() const
{
    return (_gradeRequiredToSign);
}

int AForm::getGradeRequiredToExecute() const
{
    return (_gradeRequiredToExecute);
}

void AForm::beSigned(const Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() <= _gradeRequiredToSign)
        _isSigned = true;
    else
        throw GradeTooLowException();
}

std::ostream &operator<<(std::ostream &os, const AForm &form)
{
    os << "Form " << form.getName() << " is " <<
    	(form.getIsSigned() ? "signed" : "not signed")
       << ", grade required to sign: " << form.getGradeRequiredToSign()
       << ", grade required to execute: " << form.getGradeRequiredToExecute();
    return os;
}