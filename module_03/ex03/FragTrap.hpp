/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 20:34:21 by jeldora           #+#    #+#             */
/*   Updated: 2020/10/30 15:48:12 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include <iostream>
#include "ClapTrap.hpp"

#define RED "\033[1;31m"
#define GREEN "\033[1;32m"
#define YELLOW "\033[1;33m"
#define CYAN "\033[1;36m"
#define RESET "\033[0m"

class FragTrap : public ClapTrap
{
	public:
		FragTrap(std::string set_name);
		FragTrap();
		~FragTrap();
		FragTrap(const FragTrap &copy);
		FragTrap		&operator= (FragTrap const &any_value);
		void			vaulthunter_dot_exe(std::string const & target);
};

#endif