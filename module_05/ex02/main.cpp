/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 16:41:01 by jeldora           #+#    #+#             */
/*   Updated: 2020/11/05 19:25:42 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int		main()
{
	Bureaucrat	*bur_weak = new Bureaucrat("Bob_weak", 150);
	Bureaucrat	*bur_strong = new Bureaucrat("James_strong", 1);
	Form		*form1 = new ShrubberyCreationForm("file");
	Form		*form2 = new PresidentialPardonForm("John");
	Form		*form3 = new RobotomyRequestForm("Human");

	try
	{bur_weak->signForm(*form1);}
	catch(const std::exception& e)
	{std::cerr << e.what() << '\n';}

	try
	{bur_weak->signForm(*form2);}
	catch(const std::exception& e)
	{std::cerr << e.what() << '\n';}
	
	try
	{bur_weak->signForm(*form3);}
	catch(const std::exception& e)
	{std::cerr << e.what() << '\n';}



	try
	{	
		bur_strong->signForm(*form1);
		bur_strong->executeForm(*form1);
		bur_strong->signForm(*form2);
		bur_strong->executeForm(*form2);
		bur_strong->signForm(*form3);
		bur_strong->executeForm(*form3);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{bur_weak->executeForm(*form1);}
	catch(const std::exception& e)
	{std::cerr << e.what() << '\n';}
	
	return (0);
}