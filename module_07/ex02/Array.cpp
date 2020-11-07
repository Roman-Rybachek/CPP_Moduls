/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 02:17:29 by theuser           #+#    #+#             */
/*   Updated: 2020/11/07 15:24:28 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <exception>


template <typename T>
Array<T>::Array()
{
	std::cout << "Empty array has been created\n";
	m_arr = NULL;
	m_length = 0;
}

template <typename T>
Array<T>::Array(unsigned int n)
{
	m_arr = new T[n];
	m_length = n;
}

template <typename T>
Array<T>::~Array()
{
	if (m_arr)
		delete[] m_arr;
}

template <typename T>
Array<T>::Array(const Array &copy)
{
	m_arr = new T[copy.getLen()];
	for (int i = 0; i < static_cast<int>(copy.getLen()); i++)
		m_arr[i] = copy[i];
	m_length = copy.getLen();
}

template <typename T>
T&		Array<T>::operator[] (unsigned int index) const
{
	if (index > m_length - 1)
		throw std::exception();
	return m_arr[index];
}

template <typename T>
Array<T>	&Array<T>::operator=(const Array &copy)
{
	if (m_arr != NULL)
		delete[] m_arr;
	m_arr = new T[copy.getLen()];
	for (int i = 0; i < static_cast<int>(copy.getLen()); i++)
		m_arr[i] = copy[i];
	m_length = copy.getLen();
	return (*this);
}

template <typename T>
unsigned int		Array<T>::getLen() const
{return m_length;}

