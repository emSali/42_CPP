/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 21:35:28 by esali             #+#    #+#             */
/*   Updated: 2023/11/25 17:52:05 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _value(0) {
	return;
}

Fixed::Fixed(const Fixed &copy) {
	*this = copy;
	return;
}

Fixed::Fixed(const int value) {
	this->_value = value << this->_bits;
	return;
}

Fixed::Fixed(const float value) {
	this->_value = roundf(value * (1 << this->_bits));
	return;
}

Fixed::~Fixed(void) {
	return;
}

Fixed &Fixed::operator=(const Fixed &src) {
	this->_value = src.getRawBits();
	return (*this);
}

bool Fixed::operator>(const Fixed &src) const {
	return (this->_value > src.getRawBits());
}

bool Fixed::operator<(const Fixed &src) const {
	return (this->_value < src.getRawBits());
}

bool Fixed::operator>=(const Fixed &src) const {
	return (this->_value >= src.getRawBits());
}

bool Fixed::operator<=(const Fixed &src) const {
	return (this->_value <= src.getRawBits());
}

bool Fixed::operator==(const Fixed &src) const {
	return (this->_value == src.getRawBits());
}

bool Fixed::operator!=(const Fixed &src) const {
	return (this->_value != src.getRawBits());
}

Fixed Fixed::operator+(const Fixed &src) const {
	return (Fixed(this->toFloat() + src.toFloat()));
}

Fixed Fixed::operator-(const Fixed &src) const {
	return (Fixed(this->toFloat() - src.toFloat()));
}

Fixed Fixed::operator*(const Fixed &src) const {
	return (Fixed(this->toFloat() * src.toFloat()));
}

Fixed Fixed::operator/(const Fixed &src) const {
	return (Fixed(this->toFloat() / src.toFloat()));
}

Fixed Fixed::operator++(void) {
	this->_value++;
	return (*this);
}

Fixed Fixed::operator++(int) {
	Fixed tmp(*this);
	operator++();
	return (tmp);
}

Fixed Fixed::operator--(void) {
	this->_value--;
	return (*this);
}

Fixed Fixed::operator--(int) {
	Fixed tmp(*this);
	operator--();
	return (tmp);
}

int Fixed::getRawBits(void) const
{
	return (this->_value);
}

void Fixed::setRawBits(int const raw) {
	this->_value = raw;
	return;
}

int Fixed::toInt(void) const {
	return (this->_value >> this->_bits);
}

float Fixed::toFloat(void) const {
	return ((float)this->_value / (float)(1 << this->_bits));
}

Fixed const & Fixed::min(const Fixed &a, const Fixed &b) {
	return (a < b ? a : b);
}

Fixed & Fixed::min(Fixed &a, Fixed &b) {
	return (a < b ? a : b);
}

Fixed const & Fixed::max(const Fixed &a, const Fixed &b) {
	return (a > b ? a : b);
}

Fixed & Fixed::max(Fixed &a, Fixed &b) {
	return (a > b ? a : b);
}

std::ostream & operator<<(std::ostream &o, const Fixed &src) {
	o << src.toFloat();
	return (o);
}
