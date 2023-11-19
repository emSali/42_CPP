/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:56:00 by esali             #+#    #+#             */
/*   Updated: 2023/11/19 12:06:36 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

#include <iostream>
#include <cstring>
#include <array>

class Contact {

public:

	Contact();
	~Contact(void);

	int			index;
	std::string	firstName;
	std::string	lastName;
	std::string	nickName;
	std::string	phone;
	std::string	secret;

};

#endif
