/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparolar <aparolar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 10:02:27 by aparolar          #+#    #+#             */
/*   Updated: 2022/10/09 11:50:52 by aparolar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void)
{
	Fixed a;
	Fixed b( 10 );
	Fixed const c( 42.42f );
	Fixed const d( b );

	a = Fixed( 1234.4321f );
	
	std::cout << "a + a is " << a + a << std::endl;
	std::cout << "a - a is " << a - a << std::endl;
	std::cout << "a / a is " << a / a << std::endl;
	std::cout << "a * a is " << a * a << std::endl;
	std::cout << "a > a is " << (a > a) << std::endl;
	std::cout << "a < a is " << (a < a) << std::endl;
	std::cout << "a >= a is " << (a >= a) << std::endl;
	std::cout << "a >= a is " << (a <= a) << std::endl;
	std::cout << "a == a is " << (a == a) << std::endl;
	std::cout << "a != a is " << (a != a) << std::endl;
	std::cout << "a is " << a << std::endl;	
	std::cout << "a++    is " << a++ << std::endl;
	std::cout << "a--    is " << a-- << std::endl;
	std::cout << "++a	 is " << ++a << std::endl;
	std::cout << "--a    is " << --a << std::endl;
	std::cout << "min(a, b) is " << Fixed::min(a, b) << std::endl;
	std::cout << "min(c, d) is " << Fixed::min(c, d) << std::endl;
	std::cout << "max(a, b) is " << Fixed::max(a, b) << std::endl;
	std::cout << "max(c, d) is " << Fixed::max(c, d) << std::endl;
	std::cout << "a is " << a << std::endl;
	std::cout << "x is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;

	return (0);
}

