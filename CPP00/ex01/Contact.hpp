/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:56:00 by esali             #+#    #+#             */
/*   Updated: 2023/11/17 18:13:28 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

#include <iostream>
#include <cstring>
#include <array>

class Contact {

public:

	Contact(
		std::string const firstName,
		std::string const lastName,
		std::string const nickName,
		std::string const phone,
		std::string const secret
	);
	~Contact(void);

	std::string	getFirstName(void) const;
	std::string	getLastName(void) const;
	std::string	getNickName(void) const;
	std::string	getPhone(void) const;
	std::string	getSecret(void) const;

private:
	std::string const firstName;
	std::string const lastName;
	std::string const nickName;
	std::string const phone;
	std::string const secret;

};

#endif
