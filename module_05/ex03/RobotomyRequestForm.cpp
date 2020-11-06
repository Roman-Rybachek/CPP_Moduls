/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 18:52:41 by theuser           #+#    #+#             */
/*   Updated: 2020/11/05 18:39:09 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <fstream>
#include <string>
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : Form("RobotomyRequestForm", 25, 5)
{m_signed = copy.getSigned(); m_target = copy.getTarget();}

std::string			RobotomyRequestForm::getTarget() const
{return (m_target);}

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) : Form("RobotomyRequestForm", 25, 5)
{m_signed = false; m_target = target;}

RobotomyRequestForm::~RobotomyRequestForm()
{}


RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &copy)
{copy.getName(); return (*this);}


void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (m_signed == false)
		throw FormIsNotSignedException();
	if (executor.getGrade() > m_exec_grade)
		throw GradeTooLowException();
	std::cout << m_target << "* dzzz... dzzz... *\n";

	int	r;

	srand(time(0));
	r = rand() % 2;
	if (r == 1)
		std::cout << m_target << " has been robotomized successfully\n";
	else
		std::cout << m_target << " failure\n";
}