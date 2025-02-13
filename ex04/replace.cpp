/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaumann <mnaumann@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 16:59:55 by mnaumann          #+#    #+#             */
/*   Updated: 2025/02/13 17:34:06 by mnaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

using std::string;

string readFileToString(const string &filename){
	std::ifstream file(filename);
	if (!file.is_open()){
		std::cerr << "Error: could not open file" << std::endl;
		return "";
	}
	string content((std::istreambuf_iterator<char>(file)),
					(std::istreambuf_iterator<char>()));
	file.close();
	return content;
}

string customReplace(string content, string stringToReplace,
						string replacementString){
    if (stringToReplace.empty()) {
        return content;
    }
    size_t pos = 0;
    while ((pos = content.find(stringToReplace, pos)) != std::string::npos) {
        content.erase(pos, stringToReplace.length());
        content.insert(pos, replacementString);
        pos += replacementString.length();
    }
    return content;
}

int writeStringToFile(const string &filename, const string &content){
	std::ofstream file(filename);
	if (!file.is_open()){
		std::cerr << "Error: could not open file" << std::endl;
		return 1;
	}
	file << content;
	file.close();
	return 0;
}

string getOutputFilename(const string &filename){
	return filename + ".replace";
}