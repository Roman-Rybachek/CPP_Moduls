/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 16:41:01 by jeldora           #+#    #+#             */
/*   Updated: 2020/11/05 22:24:10 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int		main()
{
	Bureaucrat *a = new Bureaucrat("Bob", 1);

	Intern  someRandomIntern ;
	
	Form*   rrf;
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	a->signForm(*rrf);
	a->executeForm(*rrf);
	rrf = someRandomIntern.makeForm("presidental pardon", "Bender");
	a->signForm(*rrf);
	a->executeForm(*rrf);
	rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
	a->signForm(*rrf);
	a->executeForm(*rrf);
	rrf = someRandomIntern.makeForm("gsfgsfgsg", "Bender");

	return (0);
}