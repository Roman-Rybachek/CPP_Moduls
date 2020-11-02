/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 17:14:31 by jeldora           #+#    #+#             */
/*   Updated: 2020/11/02 18:11:34 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include <iostream>
# include "Enemy.hpp"
# include "AWeapon.hpp"

class Character
{
	private:
		std::string			m_name;
		int					m_ap;
		AWeapon				*m_weapon;
	public:
		Character();
		Character(std::string const &name);
		Character(const Character &copy);
		~Character();
		Character &operator=(const Character &copy);
		// Methods
		void				recoverAP();
		void 				equip(AWeapon*);
		void 				attack(Enemy*);
		int					getAP() const;
		std::string const	*getWeaponName() const;
		std::string const	&getName() const;
};

std::ostream	&operator<<(std::ostream &os, Character const &any);

#endif
