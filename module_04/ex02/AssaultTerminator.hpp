/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 00:15:42 by theuser           #+#    #+#             */
/*   Updated: 2020/11/03 16:43:13 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP
# include <iostream>
# include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
	public:
		AssaultTerminator();
		AssaultTerminator(const AssaultTerminator &copy);
		~AssaultTerminator();
		AssaultTerminator &operator=(const AssaultTerminator &copy);

		void battleCry() const;
		void rangedAttack() const;
		void meleeAttack() const;
		ISpaceMarine* clone() const;
	private:
};

#endif
