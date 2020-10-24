/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 02:23:41 by jeldora           #+#    #+#             */
/*   Updated: 2020/10/24 23:33:34 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
#define HUMAN_HPP
#include <iostream>
#include "Brain.hpp"

class Human
{
	private:
		const Brain	little_brain;
	public:
		std::string identify();
		Brain		getBrain();
};

#endif