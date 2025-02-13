/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaumann <mnaumann@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 10:57:39 by mnaumann          #+#    #+#             */
/*   Updated: 2025/02/13 14:25:41 by mnaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include<iostream>
#include<iomanip>

class Zombie{

	private:
		std::string	name;

	public:
		void		setName(std::string name);
		std::string	getName(void);
		void		announce(void);
		~Zombie();
};

Zombie*	newZombie( std::string name );
Zombie* zombieHorde( int N, std::string name );

#endif