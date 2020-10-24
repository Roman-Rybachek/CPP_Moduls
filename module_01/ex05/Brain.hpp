/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 02:23:46 by jeldora           #+#    #+#             */
/*   Updated: 2020/10/24 04:42:57 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_CPP
#define BRAIN_CPP
#include <iostream>

class Brain
{
	private:
		int				iq;
		unsigned long	addr;
	public:
		std::string identify();
		Brain();
};

#endif