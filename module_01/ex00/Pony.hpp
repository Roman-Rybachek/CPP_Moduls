/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 08:08:20 by jeldora           #+#    #+#             */
/*   Updated: 2020/10/23 20:28:23 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Pony
{
	private:
		std::string		p_name;
		int				p_legs;
		int				p_heads;
		int				p_tails;
		int				p_eyes;

	public:
		void			set_legs(int count);
		void			set_heads(int count);
		void			set_tails(int count);
		void			set_eyes(int count);	
		
		Pony(std::string name, int legs, int heads, int tails, int eyes);
		~Pony();
		void	run();
};