/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 16:50:25 by theuser           #+#    #+#             */
/*   Updated: 2020/11/03 18:21:28 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP
# include <iostream>
# include "ISpaceMarine.hpp"
# include "ISquad.hpp"

class Squad : public ISquad
{
	private:
		ISpaceMarine	**m_units;
		int				m_count;

	public:
		Squad();
		Squad(const Squad &copy);
		~Squad();
		Squad &operator=(const Squad &copy);

		int				getCount() const;
		ISpaceMarine* 	getUnit(int) const;
		int				push(ISpaceMarine *unit);

};

#endif
