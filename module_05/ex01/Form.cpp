/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 15:10:24 by theuser           #+#    #+#             */
/*   Updated: 2020/11/04 16:55:32 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : m_name("Unnamed"), m_sign_grade(1), m_exec_grade(1)
{
	m_signed = false;
}

Form::~Form()
{
}

Form::Form(const Form &copy) : m_name(copy.getName()), \
								m_sign_grade(copy.getSignGrade()), \
								m_exec_grade(copy.getExecGrade())
{
	if (m_sign_grade < 1 || m_exec_grade < 1)
		throw GradeTooHighException();
	if (m_sign_grade > 150 || m_exec_grade > 150)
		throw GradeTooLowException();
	m_signed = copy.getSigned();
}

Form	&Form::operator=(const Form &copy)
{
	copy.getName();
	return (*this);
}

Form::Form(std::string name, int sign_grade, int exec_grade) : m_name(name), \
																m_sign_grade(sign_grade), \
																m_exec_grade(exec_grade)
{
	if (m_sign_grade < 1 || m_exec_grade < 1)
		throw GradeTooHighException();
	if (m_sign_grade > 150 || m_exec_grade > 150)
		throw GradeTooLowException();
	m_signed = false;
}


std::string			Form::getName() const
{return(m_name);}
int					Form::getSignGrade() const
{return(m_sign_grade);}
int					Form::getExecGrade() const
{return(m_exec_grade);}
bool				Form::getSigned() const
{return(m_signed);}

void				Form::beSigned(Bureaucrat bur)
{
	bur.signForm(*this);
	if (bur.getGrade() > m_sign_grade)
		throw GradeTooLowException();
	if (m_sign_grade > bur.getGrade())
		m_signed = true;
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Too high grade");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Too low grade");
}

std::ostream	&operator<<(std::ostream &os, Form const &any)
{
	os << "Form: " << any.getName() << "; Sign grade: " << \
					any.getSignGrade() << "; Sign exec: " << \
					any.getExecGrade() << "; Signed: " \
					<< any.getSigned() << "\n";
	return (os);
}