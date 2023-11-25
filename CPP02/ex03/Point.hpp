/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 11:02:31 by esali             #+#    #+#             */
/*   Updated: 2023/11/25 17:56:04 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
# define POINT_H

# include "Fixed.hpp"

#include <iostream>
#include <cmath>


class Point
{
	public:
		Point(void);
		Point(const Point &copy);
		Point(const float x, const float y);
		~Point(void);

		Point & operator=(const Point &src);
		float getX(void) const;
		float getY(void) const;

	private:
		const Fixed _x;
		const Fixed _y;
};

//bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif
