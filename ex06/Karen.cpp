/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaumann <mnaumann@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 18:27:24 by mnaumann          #+#    #+#             */
/*   Updated: 2025/02/14 16:44:06 by mnaumann         ###   ########.fr       */
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
    const std::string level_strings[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int level_num = -1;

    for (int i = 0; i < 4; i++) {
        if (level == level_strings[i]) {
            level_num = i;
            break;
        }
    }
    complain(level_num);
}

void Karen::complain(int level)
{
    void (Karen::*complain[4])(void) = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
    
    switch (level) {
        case DEBUG:
            (this->*complain[DEBUG])();
            (this->*complain[INFO])();
            (this->*complain[WARNING])();
            (this->*complain[ERROR])();
            break;
        case INFO:
            (this->*complain[INFO])();
            (this->*complain[WARNING])();
            (this->*complain[ERROR])();
            break;
        case WARNING:
            (this->*complain[WARNING])();
            (this->*complain[ERROR])();
            break;
        case ERROR:
            (this->*complain[ERROR])();
            break;
        default:
            std::cout << "I cannot perform this action" << std::endl;
            std::this_thread::sleep_for(std::chrono::milliseconds(2300));
            std::cout << "\n\n\n\n\n\n\n\n                     ....and would like to speak to the manager!" << std::endl;
    }
}
























const std::string Karen::levels[4] = {
	"[ DEBUG ]\nAll of a sudden you're like the Bin Laden of America. Osama Bin Laden is the only one who knows what I'm going through. R Kelly",
	"[ INFO ]\nWhenever I watch TV and see those poor starving kids all over the world, I can't help but cry. I mean I'd love to be skinny like that but not with all those flies and death and stuff. Mariah Carey",
	"[ WARNING ]\nIf you ain't gonna clap, we ain't gonna sing. That's how it's gonna work. Kid Rock",
	"[ ERROR ]\nIt was a Roman salute! Elon Musk"
};