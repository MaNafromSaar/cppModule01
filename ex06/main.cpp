/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaumann <mnaumann@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 18:31:14 by mnaumann          #+#    #+#             */
/*   Updated: 2025/02/13 19:17:29 by mnaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

using std::string;

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		if (argc < 2)
			std::cerr << "https://www.youtube.com/watch?v=ohDB5gbtaEQ" << std::endl;
		else
		std::cerr << "Error: wrong number of arguments" << std::endl;
		return 1;
	}
	Karen karen;
    try {
        int level = std::stoi(argv[1]);
        karen.complain(level);
    }
    catch (...) {

        karen.complain(string(argv[1]));
    }
	return 0;
}
