/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaumann <mnaumann@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 16:54:13 by mnaumann          #+#    #+#             */
/*   Updated: 2025/02/13 17:42:41 by mnaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
# define REPLACE_HPP

#include <fstream>
#include <iostream>
#include <string>

std::string readFileToString(const std::string &filename);
std::string customReplace(std::string content, std::string stringToReplace,
				std::string replacementString);
int			writeStringToFile(const std::string &filename,
				const std::string &content);
std::string getOutputFilename(const std::string &filename);

#endif

