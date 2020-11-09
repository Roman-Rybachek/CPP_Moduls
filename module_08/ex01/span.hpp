/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 17:01:46 by jeldora           #+#    #+#             */
/*   Updated: 2020/11/08 22:27:22 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <iostream>
# include <vector>
# include <exception>
# include <algorithm>
# include <stdint.h>

class span
{
	public:
		span(unsigned int n);
		span(const span &copy);
		~span();
		span &operator=(const span &copy);

		void	addNumber(int nbr);

		class IsFullException : public std::exception
		{const char* what() const throw();};

		class TooFewElements : public std::exception
		{const char* what() const throw();};

		int		longestSpan();
		int		shortestSpan();

	private:
		span();
		unsigned int		m_length;
		std::vector<int>	m_arr;
};

#endif
