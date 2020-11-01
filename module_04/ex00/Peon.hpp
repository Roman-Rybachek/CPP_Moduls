/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 11:24:08 by jeldora           #+#    #+#             */
/*   Updated: 2020/10/31 19:36:28 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
#define PEON_HPP

#include "Victim.hpp"

class Peon : public Victim
{
	public:
		// Cuplien
		Peon();
		Peon(std::string set_name);
		Peon(Peon const &copy);
		virtual ~Peon();
		Peon	&operator=(Peon const &any);
		void			getPolymorphed() const;
};

#endif