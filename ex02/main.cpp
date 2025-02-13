/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaumann <mnaumann@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 14:31:59 by mnaumann          #+#    #+#             */
/*   Updated: 2025/02/13 14:37:16 by mnaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<string>

using std::string;
using std::cout;
using std::endl;

int main()
{
	string str = "HI THIS IS BRAIN";
	string *stringPTR = &str;
	string &stringREF = str;

	cout << "Address of string: 	" << &str << endl;
	cout << "Address of stringPTR: 	" << stringPTR << endl;
	cout << "Address of stringREF: 	" << &stringREF << endl;
	cout << "StringPTR: " << *stringPTR << endl;
	cout << "StringREF: " << stringREF << endl;
	return 0;
}
