/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rehernan <rehernan@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 19:48:48 by rehernan          #+#    #+#             */
/*   Updated: 2023/03/22 20:59:47 by rehernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <stdlib.h>
#include <sstream>
#include "Contacts.hpp"

class PhoneBook {
	private:
		Contact	_contacts[8];
		int		_index;
		void	get_phonebook ( void );
		void	remove_oldest ( void );
	public:
		PhoneBook ( void );
		~PhoneBook ( void );
		void	add_contact( void );
		void	search_contact( void );
};

#endif