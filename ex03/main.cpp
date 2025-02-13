/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaumann <mnaumann@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 15:41:24 by mnaumann          #+#    #+#             */
/*   Updated: 2025/02/13 16:21:13 by mnaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main()
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeaponPTR(&club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}   
	{
        Weapon club = Weapon(nullptr);
        HumanB jim("Jim");
        //jim.setWeaponPTR(&club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    }
}
