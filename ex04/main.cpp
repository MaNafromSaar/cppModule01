/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaumann <mnaumann@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 16:51:37 by mnaumann          #+#    #+#             */
/*   Updated: 2025/02/13 17:40:41 by mnaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

using std::string;

int main(int argc, char **argv){
	if (argc != 4){
		std::cerr << "Error: wrong number of arguments" << std::endl;
		return 1;
	}
	string filename = argv[1];
	string stringToReplace = argv[2];
	string replacementString = argv[3];
	string content = readFileToString(filename);
	if (content.empty()){
		return 1;
	}
	content = customReplace(content, stringToReplace, replacementString);
	string outputFilename = getOutputFilename(filename);
	int status = writeStringToFile(outputFilename, content);
	if (status != 0) {
		std::cerr << "Error: could not write to file" << std::endl;
		return 1;
	}
	return 0;
}
