/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparolar <aparolar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 12:46:37 by aparolar          #+#    #+#             */
/*   Updated: 2022/11/02 13:58:22 by aparolar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

/* Formula to find a point
w1 = (e.x * (a.y - p.y) + e.y * (p.x - a.x)) / (d.x * e.y - d.y * e.x);
w2 = (p.y - a.y - w1 * d.y) / e.y;

pointInTriangle = (w1 >= 0.0) && (w2 >= 0.0) && ((w1 + w2) <= 1.0);
*/

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	float	dx = (b.get_x() - a.get_x());
	float	dy = (b.get_y() - a.get_y());
	float	ex = (c.get_x() - a.get_x());
	float	ey = (c.get_y() - a.get_y());
	float	w1;
	float	w2;
	
	w1 = ((ex * (a.get_y() - (point.get_y()))) + (ey * (point.get_x() - a.get_x()))) / ((dx * ey) - (dy * ex));
	w2 = (point.get_y() - a.get_y() - (w1 * dy)) / ey;
	std::cout << "w1 = " << w1 << " w2 " << w2 << std::endl;
	
	return ((w1 >= 0) && (w2 >= 0) && ((w1 + w2) <= 1));
}

