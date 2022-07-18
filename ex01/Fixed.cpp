/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparolar <aparolar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 10:02:16 by aparolar          #+#    #+#             */
/*   Updated: 2022/07/18 12:20:01 by aparolar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &toCopy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = toCopy;
}

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
	_value = value << bits;
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
	_value = roundf((double)value * (double)(1 << bits));
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

void Fixed::setRawBits(const int raw)
{
	_value = raw;
}

int Fixed::getRawBits(void) const
{
	return (_value);	
}

int	Fixed::toInt(void) const
{
	return (_value >> bits);
}

float Fixed::toFloat(void) const
{
	return ((float)(_value / (float)(1 << bits)));
}

Fixed& Fixed::operator=(Fixed const &toCopy)
{
	std::cout << "Assignation operator called" << std::endl;
	_value = toCopy.getRawBits();
	return (*this);
}

std::ostream &operator << (std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
}