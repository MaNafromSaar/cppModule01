/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaumann <mnaumann@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 18:01:54 by mnaumann          #+#    #+#             */
/*   Updated: 2025/02/13 18:28:55 by mnaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

# include <iostream>
# include <string>

class Karen
{
	private:
		static const std::string levels[4];

		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
	public:
		void complain(std::string level);
};

enum e_levels
{
	DEBUG,
	INFO,
	WARNING,
	ERROR
};

const std::string Karen::levels[4] = {
	"DEBUG:		All of a sudden you're like the Bin Laden of America. Osama Bin Laden is the only one who knows what I'm going through. R Kelly",
	"INFO:		Whenever I watch TV and see those poor starving kids all over the world, I can't help but cry. I mean I'd love to be skinny like that but not with all those flies and death and stuff. Mariah Carey",
	"WARNING:	If you ain't gonna clap, we ain't gonna sing. That's how it's gonna work. Kid Rock",
	"ERROR:		It was a Roman salute! Elon Musk"
};

#endif