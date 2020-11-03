/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 19:25:18 by theuser           #+#    #+#             */
/*   Updated: 2020/11/03 23:19:21 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	public:
		AMateria();
		AMateria(const AMateria &copy);
		virtual ~AMateria();
		AMateria &operator=(const AMateria &copy);

		std::string const	&getType() const;
		unsigned int		getXP() const;
		virtual AMateria*	clone() const = 0;
		virtual void		use(ICharacter &target);
	protected:
		unsigned int	_xp;
		std::string		m_type;
		std::string		str1;
		std::string		str2;
};

#endif
