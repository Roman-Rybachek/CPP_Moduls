/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 20:40:59 by jeldora           #+#    #+#             */
/*   Updated: 2020/10/31 22:36:35 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
#define AWEAPON_HPP

#include <iostream>

class AWeapon
{
	protected:
		std::string		m_name;
		std::string		m_output;
		int				m_damage;
		int				m_apcost;
	public:
		// F*cking Cuplien form
		AWeapon();
		AWeapon(AWeapon const &copy);
		AWeapon(std::string const &name, int apcost, int damage);
		virtual ~AWeapon();
		AWeapon				&operator=(AWeapon const &any);
		// Other
		std::string	const	&getName() const;
		int					getAPCost() const;
		int					getDamage() const;
		virtual void		attack() const = 0;
};

#endif