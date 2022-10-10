/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparolar <aparolar@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 12:28:05 by aparolar          #+#    #+#             */
/*   Updated: 2022/10/10 12:56:54 by aparolar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
	private:
		Fixed const _x;
		Fixed const _y;
	
	public:
		Point();
		Point(float x, float y);
		Point(const Point &point);
		Point& operator = (Point const &);
		~Point();
		float get_x() const;
		float get_y() const;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif

