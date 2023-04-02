/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rehernan <rehernan@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 17:57:17 by rehernan          #+#    #+#             */
/*   Updated: 2023/04/02 16:49:46 by rehernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>
#include <sstream>

class Zombie
{
	private:
		std::string		_name;
	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();

		void	announce( void );
		void	setName( int N, std::string name);
};

Zombie*		zombieHorde( int N, std::string name );

#endif