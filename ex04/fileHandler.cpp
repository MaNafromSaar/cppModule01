/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fileHandler.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaumann <mnaumann@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 17:00:04 by mnaumann          #+#    #+#             */
/*   Updated: 2025/02/13 17:02:53 by mnaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

FileHandler::FileHandler(std::string filename) : filename(filename)
{
	std::ifstream file(filename);
	if (!file.is_open())
	{
		std::cerr << "Error: could not open file" << std::endl;
		exit(1);
	}
	file.close();
}

FileHandler::~FileHandler(){}

std::string FileHandler::getFilename() const
{
	return filename;
}

std::string FileHandler::setOutputFilename()
{
	std::string outputFilename = filename + ".replace";
	return outputFilename;
}
