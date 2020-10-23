/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 02:23:46 by jeldora           #+#    #+#             */
/*   Updated: 2020/10/24 02:44:39 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_CPP
#define BRAIN_CPP
#include <iostream>

class Brain
{
	private:
		int		iq;
	public:
		std::string identify();
		Brain();
};

#endif