/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   POint.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 11:04:02 by esali             #+#    #+#             */
/*   Updated: 2023/11/24 12:05:29 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _x(0), _y(0) {
	return;
}

Point::Point(const Point &copy) {
	*this = copy;
	return;
}

Point::Point(const float x, const float y) : _x(x), _y(y) {
	return;
}

Point::~Point(void) {
	return;
}

Point & Point::operator=(const Point &src) {
	this->_x = src.getX();
	this->_y = src.getY();
	return (*this);
}

float Point::getX(void) const {
	return (this->_x.toFloat());
}

float Point::getY(void) const {
	return (this->_y.toFloat());
}

void Point::setX(const float x) {
	this->_x = x;
	return;
}

void Point::setY(const float y) {
	this->_y = y;
	return;
}
