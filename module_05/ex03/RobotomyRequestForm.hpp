/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 18:52:41 by theuser           #+#    #+#             */
/*   Updated: 2020/11/05 21:12:04 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include <iostream>
# include "Form.hpp"

class RobotomyRequestForm : public Form
{
	public:
		RobotomyRequestForm(std::string const &target);
		~RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm &copy);

		void		execute(Bureaucrat const & executor) const;
		std::string	getTarget() const;
	private:
		std::string m_target;
		RobotomyRequestForm();
		RobotomyRequestForm &operator=(const RobotomyRequestForm &copy);
};

#endif
