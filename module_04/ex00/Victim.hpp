/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 10:09:06 by jeldora           #+#    #+#             */
/*   Updated: 2020/10/31 19:31:34 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <iostream>
#include "functions.hpp"

class Victim
{
	protected:
		std::string		name;
	public:
		// Cuplien
		Victim();
		Victim(std::string set_name);
		Victim(const Victim &copy);
		virtual ~Victim();
		Victim		&operator=(const Victim &any);
		// Methods
		std::string 	introduce() const;
		void			getPolymorphed() const;
};

std::ostream	&operator<<(std::ostream &os, Victim const &any);

#endif