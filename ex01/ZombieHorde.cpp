/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaumann <mnaumann@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 13:57:53 by mnaumann          #+#    #+#             */
/*   Updated: 2025/02/13 14:25:24 by mnaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ){
	Zombie*	horde = new Zombie[N];
	for (int i = 0; i < N; i++){
		horde[i].setName(name);
		horde[i].announce();
		name += "y";
	}
	return horde;
}