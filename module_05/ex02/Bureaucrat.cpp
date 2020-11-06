/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 13:28:01 by theuser           #+#    #+#             */
/*   Updated: 2020/11/05 18:54:36 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
}

Bureaucrat::Bureaucrat(std::string name, int grade) : m_name(name)
{
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	m_grade = grade;
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : m_name(copy.getName())
{
	m_grade = copy.getGrade();
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &copy)
{
	m_grade = copy.getGrade();
	return (*this);
}

std::string			Bureaucrat::getName() const
{return (m_name);}

int					Bureaucrat::getGrade() const
{return (m_grade);}

void				Bureaucrat::incGrade()
{
	int r;

	r = m_grade - 1;
	if (r < 1)
		throw GradeTooHighException();
	m_grade++;

}

void				Bureaucrat::decGrade()
{
	int r;

	r = m_grade + 1;
	if (r > 150)
		throw GradeTooLowException();
	m_grade++;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Too high grade");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Too low grade");
}

std::ostream	&operator<<(std::ostream &os, Bureaucrat const &any)
{
	os <<any.getName() << ", bureaucrat grade " << any.getGrade() << ".\n";
	return (os);
}

void			Bureaucrat::signForm(Form &form)
{
	if (m_grade <= form.getSignGrade())
	{
		form.beSigned(*this);
	}
	else
	{std::cout << m_name << " cannot sign " << form.getName() \
							<< " because his grade too low\n";}
}

void			Bureaucrat::executeForm(Form const & form)
{
	form.execute(*this);
}