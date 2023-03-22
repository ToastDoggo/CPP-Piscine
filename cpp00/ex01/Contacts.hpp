/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rehernan <rehernan@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 19:47:35 by rehernan          #+#    #+#             */
/*   Updated: 2023/03/22 20:45:48 by rehernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACTS_HPP
#define CONTACTS_HPP

#include <iostream>
#include <cstdio>
#include <iomanip>
#include "Contacts.hpp"

class Contact {
	private:
		std::string		_contactsData[5];
		enum			contactsFields {
							FIRST_NAME = 0,
							LAST_NAME = 1,
							NICKNAME = 2,
							PHONENUMBER = 3,
							DARK_SECRET = 4
		};
		int				_index;
		bool	is_blank (std::string contactsData);
		std::string	cut_string ( std::string contactsData);
	public:
		Contact ( void );
		~Contact ( void );
		void	get_contacts ( int index );
		void	get_one_contact ( void );
		void	set_contact ( void );
};

#endif