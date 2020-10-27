/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 00:46:30 by jeldora           #+#    #+#             */
/*   Updated: 2020/10/27 06:17:41 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <ostream>

class Fixed
{
	private:
		int					value;
		static const int	fractional = 8;
	public:
		Fixed();
		Fixed(const Fixed &copy);
		~Fixed();
		Fixed(const int set_value);
		Fixed(const float set_value);
		Fixed 			&operator= (Fixed const &any_value);
		int 			getRawBits() const;
		void			setRawBits(int const raw);
		float			toFloat() const;
		int				toInt() const;
};

		std::ostream 	&operator<< (std::ostream &os, Fixed const &print_value);
#endif