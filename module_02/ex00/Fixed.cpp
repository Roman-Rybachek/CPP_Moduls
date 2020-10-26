/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 00:59:59 by jeldora           #+#    #+#             */
/*   Updated: 2020/10/27 01:30:39 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::	Fixed()
{
	value = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::	Fixed(const Fixed &any_value)
{
	std::cout << "Copy constructor called" << std::endl;
	value = any_value.getRawBits();
}

Fixed::	~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator= (Fixed &any_value)
{
	std::cout << "Assignation operator called" << std::endl;
	value = any_value.getRawBits();
	return (*this);
}

int		Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return value;
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	value = raw;
}