/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 15:10:24 by theuser           #+#    #+#             */
/*   Updated: 2020/11/04 16:51:17 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
		Form(const Form &copy);
		~Form();
		Form(std::string name, int sign_grade, int exec_grade);
		std::string			getName() const;
		int					getSignGrade() const;
		int					getExecGrade() const;
		bool				getSigned() const;
		void				beSigned(Bureaucrat bur); // gradetolowexception

		class GradeTooHighException : public std::exception
		{
			const char* what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			const char* what() const throw();
		};

	private:
		Form();
		Form &operator=(const Form &copy);
		std::string const	m_name;
		bool				m_signed; // false
		int	const			m_sign_grade; // 1 - 150
		int	const			m_exec_grade; // 1 - 150
};

std::ostream	&operator<<(std::ostream &os, Form const &any);

#endif
