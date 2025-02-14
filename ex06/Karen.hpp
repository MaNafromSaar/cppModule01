/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaumann <mnaumann@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 18:01:54 by mnaumann          #+#    #+#             */
/*   Updated: 2025/02/13 19:21:22 by mnaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

# include <iostream>
# include <string>
# include <chrono>
# include <thread>


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
		void complain(int level);
};

enum level
{
	DEBUG,
	INFO,
	WARNING,
	ERROR
};

#endif