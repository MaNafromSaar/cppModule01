/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaumann <mnaumann@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 18:27:24 by mnaumann          #+#    #+#             */
/*   Updated: 2025/02/13 18:30:57 by mnaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

void Karen::debug(void)
{
	std::cout << levels[DEBUG] << std::endl;
}

void Karen::info(void)
{
	std::cout << levels[INFO] << std::endl;
}

void Karen::warning(void)
{
	std::cout << levels[WARNING] << std::endl;
}

void Karen::error(void)
{
	std::cout << levels[ERROR] << std::endl;
}

void Karen::complain(std::string level)
{
	void (Karen::*complaints[4])(void) = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i])
		{
			(this->*complaints[i])();
			return;
		}
	}
	std::cout << "I cannot perform this action\n\n\n\n\n\n\n\n                                                 ....and would like to speak to the manager!" << std::endl;
}