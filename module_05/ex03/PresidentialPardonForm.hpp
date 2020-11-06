/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 18:52:41 by theuser           #+#    #+#             */
/*   Updated: 2020/11/05 21:17:45 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# include <iostream>
# include "Form.hpp"

class PresidentialPardonForm : public Form
{
	public:
		PresidentialPardonForm(std::string const &target);
		~PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm &copy);

		void		execute(Bureaucrat const & executor) const;
		std::string	getTarget() const;
	private:
		std::string m_target;
		PresidentialPardonForm();
		PresidentialPardonForm &operator=(const PresidentialPardonForm &copy);
};

#endif
