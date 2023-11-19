/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:48:17 by esali             #+#    #+#             */
/*   Updated: 2023/11/19 12:05:33 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <cstring>
#include <cstdlib>
#include "Contact.hpp"


class PhoneBook {

public:

	PhoneBook(void);
	~PhoneBook(void);

	void	add(void);
	void	search(void) const;

private:

	Contact contacts[];

};

#endif
