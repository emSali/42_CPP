/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:56:00 by esali             #+#    #+#             */
/*   Updated: 2023/11/20 16:24:37 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

#include <iostream>
#include <cstring>

class Contact {

	public:

		Contact();
		~Contact(void);

		std::string	getFirstName(void) const;
		std::string	getLastName(void) const;
		std::string	getNickName(void) const;
		std::string	getPhone(void) const;
		std::string	getSecret(void) const;
		int			getIndex(void) const;
		void		setIndex(int index);
		void		setFirstName(std::string firstName);
		void		setLastName(std::string lastName);
		void		setNickName(std::string nickName);
		void		setPhone(std::string phone);
		void		setSecret(std::string secret);



	private:

		int			index;
		std::string	firstName;
		std::string	lastName;
		std::string	nickName;
		std::string	phone;
		std::string	secret;

};

#endif
