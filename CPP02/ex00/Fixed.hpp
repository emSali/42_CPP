/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 21:35:24 by esali             #+#    #+#             */
/*   Updated: 2023/11/23 21:44:47 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# include <iostream>
# include <cmath>

class Fixed
{
	public:
		Fixed(void);
		Fixed(const Fixed &copy);
		~Fixed(void);
		Fixed &operator=(const Fixed &src);
		int getRawBits(void) const;
		void setRawBits(int const raw);

	private:
		int _value;
		static const int _bits = 8;
};

#endif
