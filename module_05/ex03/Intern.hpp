/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 19:28:37 by theuser           #+#    #+#             */
/*   Updated: 2020/11/05 22:14:26 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP
# include <iostream>
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "Form.hpp"

class Intern
{
	public:
		Intern();
		Form	*makeForm(std::string name, std::string target);
		~Intern();
		Intern(const Intern &copy);
		Intern &operator=(const Intern &copy);

	private:
		std::string		m_forms[3];
		typedef Form* (Intern::*functype)(std::string);
		functype m_function[3];

		Form*	createShrubbery(std::string target);
		Form*	createPresidentional(std::string target);
		Form*	createRobotomy(std::string target);
};

#endif
