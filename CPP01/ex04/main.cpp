/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 19:43:09 by esali             #+#    #+#             */
/*   Updated: 2023/11/22 20:46:49 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filestream.hpp"

std::string	replace(std::string content, std::string s1, std::string s2){
	if(s1.empty()) {
		std::cout << "The second argument can not be empty" << std::endl;
		return (NULL);
	}
	for (unsigned long i = 0; i < content.length(); i++){
		if (content[i] == s1[0]){
			if (std::strncmp(&content[i], s1.c_str(), s1.length()) == 0){
				content.erase(i, s1.length());
				content.insert(i, s2);
				i += s2.length();
			}
		}
	}
	return (content);
}

std::string	openFile(std::string filename){
	std::ifstream	ifs;
	std::string		line;
	std::string		content;

	ifs.open(filename);
	if (!ifs.is_open()){
		std::cout << "Error opening file" << std::endl;
		return (NULL);
	}
	while (std::getline(ifs, line)){
		content += line + "\n";
	}
	ifs.close();
	return (content);
}

int	writeFile(char *filename, std::string content){
	std::ofstream	ofs;

	std::strcat(filename, ".replace");
	ofs.open(filename);
	if (!ofs.is_open()){
		std::cout << "Error opening file" << std::endl;
		return (1);
	}
	ofs << content;
	ofs.close();
	return (0);
}

int main(int argc, char **argv) {
	//std::ofstream	ofs;
	std::string		content;

	if (argc != 4){
		std::cout << "Wrong number of arguments" << std::endl;
		return (1);
	}
	content = openFile(argv[1]);
	if (content.empty())
		return (1);
	content = replace(content, argv[2], argv[3]);
	if (content.empty())
		return (1);
	return (writeFile(argv[1], content));
}
