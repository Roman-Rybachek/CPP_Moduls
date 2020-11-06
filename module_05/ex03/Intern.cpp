/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 19:28:37 by theuser           #+#    #+#             */
/*   Updated: 2020/11/05 22:23:20 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	m_forms[0] = "robotomy request";
	m_forms[1] = "presidental pardon";
	m_forms[2] = "shrubbery creation";
	m_function[0] = &Intern::createRobotomy; 
	m_function[1] = &Intern::createPresidentional;
	m_function[2] = &Intern::createShrubbery;
}

Intern::~Intern()
{
}

Intern::Intern(const Intern &copy)
{
	m_forms[0] = "robotomy request";
	m_forms[1] = "presidental pardon";
	m_forms[2] = "shrubbery creation";
	m_function[0] = &Intern::createRobotomy; 
	m_function[1] = &Intern::createPresidentional;
	m_function[2] = &Intern::createShrubbery;
	(void)copy;
}

Intern	&Intern::operator=(const Intern &copy)
{
	(void)copy;
	return (*this);
}

Form	*Intern::makeForm(std::string name, std::string target)
{
	for (int i = 0; i < 3; i++)
	{
		if (name == m_forms[i])
			return ((this->*m_function[i])(target));
	}
	std::cout << "Invalid form name\n";
	return (NULL);
}

Form*	Intern::createShrubbery(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

Form*	Intern::createPresidentional(std::string target)
{
	return (new PresidentialPardonForm(target));
}

Form*	Intern::createRobotomy(std::string target)
{
	return (new RobotomyRequestForm(target));
}