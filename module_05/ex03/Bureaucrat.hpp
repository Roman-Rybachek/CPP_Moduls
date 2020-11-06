/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 13:28:01 by theuser           #+#    #+#             */
/*   Updated: 2020/11/05 18:46:01 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
# include "Form.hpp"

class Form;

class Bureaucrat
{
	public:
		~Bureaucrat();
		Bureaucrat(const Bureaucrat &copy);
		Bureaucrat(std::string name, int grade);

		std::string			getName() const;
		int					getGrade() const;
		void				incGrade();
		void				decGrade();
		void				signForm(Form &form);
		void				executeForm(Form const & form);	

		class GradeTooHighException : public std::exception
		{
			const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			const char* what() const throw();
		};

	private:
		Bureaucrat &operator=(const Bureaucrat &copy);
		Bureaucrat();
		std::string const	m_name;
		int					m_grade;
};

std::ostream	&operator<<(std::ostream &os, Bureaucrat const &any);

#endif
