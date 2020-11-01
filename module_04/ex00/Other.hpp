/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Other.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 11:24:08 by jeldora           #+#    #+#             */
/*   Updated: 2020/10/31 19:42:53 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OTHER_HPP
#define OTHER_HPP

#include "Victim.hpp"

class Other : public Victim
{
	public:
		// Cuplien
		Other();
		Other(std::string set_name);
		Other(Other const &copy);
		virtual ~Other();
		Other	&operator=(Other const &any);
		void			getPolymorphed() const;
};

#endif