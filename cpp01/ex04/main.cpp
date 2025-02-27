/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cspreafi <cspreafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 22:49:38 by cspreafi          #+#    #+#             */
/*   Updated: 2025/02/06 22:12:57 by cspreafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

typedef std::string str;

void	getNewLine(str &line, str first, str second) {
	size_t	startPos = 0;

	while ((startPos = line.find(first, startPos)) != str::npos) {
		line = line.substr(0, startPos) + second + line.substr(startPos + first.length());
		startPos += second.length();
	}
}

int	main(int ac, char **av) {
	if (ac != 4) {
		std::cout << "Usage : ./replace file_in string1 string2"; return 0;
	}
	
	str				in_file = av[1];
	str				first = av[2];
	str				second = av[3];
	str				line;
	str				out_file = in_file + ".replace";

	std::ifstream	input(in_file.c_str());
	std::ofstream	output(out_file.c_str());
	
	if (input.is_open()) {
		while (std::getline(input, line)) {
			getNewLine(line, first, second);
			output << line;
			if (!input.eof())
				output << std::endl;
		}
		input.close();
		output.close();
	}
	else
		std::cout << "Error: cannot open file." << std::endl;
	return 0;
}