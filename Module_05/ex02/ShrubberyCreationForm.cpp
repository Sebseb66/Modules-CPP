/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfroidev <sfroidev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 16:12:27 by sfroidev          #+#    #+#             */
/*   Updated: 2024/03/21 16:41:32 by sfroidev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
: AForm("ShrubberyCreationForm", 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other)
: AForm(other), _target(other._target) {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
    if (this != &other)
    {
        AForm::operator=(other);
        _target = other._target;
    }
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    if (!getIsSigned())
    {
        throw AForm::FormNotSignedException();
    }
    if (executor.getGrade() > this->getGradeRequiredToExecute())
    {
        throw AForm::GradeTooLowException();
    }

    std::string fileName = _target + "_shrubbery";
    std::ofstream ofs(fileName.c_str());

    if (!ofs)
    {
        throw std::runtime_error("Failed to create file");
    }

    ofs << "       ^ " << std::endl;
    ofs << "      { } " << std::endl;
    ofs << "     {   } " << std::endl;
    ofs << "    {     } " << std::endl;
    ofs << "   {       } " << std::endl;
    ofs << "  {         } " << std::endl;
    ofs << " {           } " << std::endl;
    ofs << " ------------- " << std::endl;
    ofs << "      ||" << std::endl;
    ofs << "      ||" << std::endl;

    ofs.close();
    std::cout  << "Created a shrubbery file named " << fileName << std::endl;
}
