/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 18:52:41 by theuser           #+#    #+#             */
/*   Updated: 2020/11/05 18:39:09 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include <fstream>
#include <string>

PresidentialPardonForm::PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) : Form("PresidentialPardonForm", 25, 5)
{m_signed = copy.getSigned(); m_target = copy.getTarget();}

std::string			PresidentialPardonForm::getTarget() const
{return (m_target);}

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) : Form("PresidentialPardonForm", 25, 5)
{m_signed = false; m_target = target;}

PresidentialPardonForm::~PresidentialPardonForm()
{}


PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &copy)
{copy.getName(); return (*this);}


void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (m_signed == false)
		throw FormIsNotSignedException();
	if (executor.getGrade() > m_exec_grade)
		throw GradeTooLowException();
	std::cout << m_target << "has been pardoned by Zafod Beeblebrox.\n";
}