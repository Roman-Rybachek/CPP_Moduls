/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 23:07:37 by jeldora           #+#    #+#             */
/*   Updated: 2020/10/31 11:11:54 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
#define SORCERER_HPP

#include <iostream>
#include "functions.hpp"
#include "Victim.hpp"

class Sorcerer
{
	private:
		std::string name;
		std::string title;
	public:
		// Cuplien
		Sorcerer();
		Sorcerer(std::string name, std::string title);
		Sorcerer(Sorcerer const &copy);
		~Sorcerer();
		Sorcerer	&operator= (Sorcerer const &any);
		// Methods
		std::string	introduce() const;
		void polymorph(Victim const &any) const;
};

std::ostream	&operator<<(std::ostream &os, Sorcerer const &any);

#endif