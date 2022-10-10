/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparolar <aparolar@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 12:36:27 by aparolar          #+#    #+#             */
/*   Updated: 2022/10/10 12:58:29 by aparolar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point()
	: _x(0),_y(0)
{}

Point::Point(float x, float y)
	: _x(x), _y(y)
{}

Point::Point(const Point &point)
	: _x(point.get_x()), _y(point.get_y())
{}

Point::~Point() {}

Point& Point::operator = (Point const &)
{
	return *this;
}

float Point::get_x() const
{
	return _x.toFloat();
}

float Point::get_y() const
{
	return _y.toFloat();
}

