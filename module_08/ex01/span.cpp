/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 17:01:45 by jeldora           #+#    #+#             */
/*   Updated: 2020/11/10 00:28:59 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

span::span()
{
	m_length = 0;
}

span::span(unsigned int n)
{
	m_length = n;
}


span::~span()
{
}

span::span(const span &copy)
{
	m_arr = copy.m_arr;
}

span	&span::operator=(const span &copy)
{
	m_arr = copy.m_arr;
	return (*this);
}

void	span::addNumber(int nbr)
{
	if (m_arr.size() == m_length)
		throw span::IsFullException();
	m_arr.push_back(nbr);
	std::cout << "Add element " << nbr << "\n";
}

const char *span::IsFullException::what() const throw()
{
	return ("Object is full");
}

const char *span::TooFewElements::what() const throw()
{
	return ("Too few elemetns in object");
}

int		span::longestSpan()
{
	if (m_arr.size() < 2)
		throw TooFewElements();
	int min = *std::min_element(m_arr.begin(), m_arr.end());
	int max = *std::max_element(m_arr.begin(), m_arr.end());
	std::cout << "Longest span: " << max - min << "\n";
	return (max - min);
}

int		span::shortestSpan()
{
	if (m_arr.size() < 2)
		throw TooFewElements();
	int res = INT32_MAX;
	int tmp;
	std::sort(m_arr.begin(), m_arr.end());
	for (int i = 0; i < static_cast<int>(m_arr.size()); i++)
	{
		if (m_arr[i + 1])
		{
			tmp = m_arr[i + 1] - m_arr[i];
			if (tmp < res)
				res = tmp;
		}
	}
	std::cout << "Shortest span: " << res << "\n";
	return (res);
}


int		&span::operator[](unsigned int index)
{
	if (index > m_length)
		throw std::exception();
	if (index >= m_arr.size())
	{
		index = m_arr.size();
		m_arr.push_back(0);
	}
	return (m_arr[index]);
}