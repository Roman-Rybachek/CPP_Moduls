/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 02:17:29 by theuser           #+#    #+#             */
/*   Updated: 2020/11/07 03:16:28 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array()
{
	m_arr = new t[];
}

template <typename T>
Array<T>::Array(unsigned int n)
{
	m_arr = new t[n];
}

template <typename T>
Array<T>::~Array()
{
}

template <typename T>
Array<T>::Array(const Array &copy)
{
	if (m_arr)
		delete m_arr;
	m_arr = new T[copy.getLen()];
	for (int i = 0; i < copy.getLen(); i++)
		m_arr[i] = /* тут я оставнился */
}

template <typename T>
Array<T>	&Array<T>::operator=(const Array &copy)
{
	return (*this);
}

template <typename T>
int		Array<T>::getLen() const
{return m_length;}