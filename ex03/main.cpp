/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparolar <aparolar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 10:02:27 by aparolar          #+#    #+#             */
/*   Updated: 2022/10/10 12:26:02 by aparolar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int	main(void)
{
	Point a(2.0, 1.0);
	Point b(4.0, 10.0);
	Point c(6.0, 7.0);
	Point point(4.0, 14);

	if (bsp(a, b, c, point))
		std::cout << "the point it's inside of the triangle" << std::endl;
	else
		std::cout << "the point dont it's inside of the triangle" << std::endl;

	return (0);
}

