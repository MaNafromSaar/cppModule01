/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaumann <mnaumann@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 10:57:35 by mnaumann          #+#    #+#             */
/*   Updated: 2025/02/13 14:26:15 by mnaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::setName(std::string name) {
    this->name = name;
}

std::string Zombie::getName(void) {
    return name;
}

void Zombie::announce(void) {
    std::cout << name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie() {
    std::cout << name << " is destroyed." << std::endl;
}
