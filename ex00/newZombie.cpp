/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaumann <mnaumann@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 10:57:29 by mnaumann          #+#    #+#             */
/*   Updated: 2025/02/13 13:57:29 by mnaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	newZombie( std::string name ){
	Zombie*	zombie = new Zombie();
	zombie->setName(name);
	return zombie;
}
