/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaumann <mnaumann@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 10:57:24 by mnaumann          #+#    #+#             */
/*   Updated: 2025/02/13 14:15:31 by mnaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie*	zombies = zombieHorde(15, "Jenny");
	delete[] zombies;
	std::cout << "Run, Forrest, run!" << std::endl;
	return 0;
}