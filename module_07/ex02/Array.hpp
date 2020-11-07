/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 02:17:29 by theuser           #+#    #+#             */
/*   Updated: 2020/11/07 03:14:16 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>

template <typename T>
class Array
{
	public:
		Array();
		Array(unsigned int n);
		Array(const Array &copy);
		~Array();
		Array &operator=(const Array &copy);

		int		getLen() const;
	private:
		T	*m_arr;
		int	m_length;
};

#endif
