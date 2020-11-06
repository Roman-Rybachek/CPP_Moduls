/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 18:52:41 by theuser           #+#    #+#             */
/*   Updated: 2020/11/05 21:12:12 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>
#include <string>

ShrubberyCreationForm::ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : Form("ShrubberyCreationForm", 145, 137)
{m_signed = copy.getSigned(); m_target = copy.getTarget();}

std::string			ShrubberyCreationForm::getTarget() const
{return (m_target);}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) : Form("ShrubberyCreationForm", 145, 137)
{m_signed = false; m_target = target;}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}


ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy)
{copy.getName(); return (*this);}


void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (m_signed == false)
		throw FormIsNotSignedException();
	if (executor.getGrade() > m_exec_grade)
		throw GradeTooLowException();
	std::string file = m_target;
	file.append("_shrubbery");
	std::ofstream out(file.c_str(), std::ios::trunc);
	out << "      /\\              \n";
	out << "     /\\*\\            \n";
	out << "    /\\O\\*\\          \n";
	out << "   /*/\\/\\/\\         \n";
	out << "  /\\O\\/\\*\\/\\      \n";
	out << " /\\*\\/\\*\\/\\/\\    \n";
	out << "/\\O\\/\\/*/\\/O/\\    \n";
	out << "      ||               \n";
	out << "      ||               \n";
	out << "      ||               \n";

}