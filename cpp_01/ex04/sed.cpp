/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 10:19:29 by yes-slim          #+#    #+#             */
/*   Updated: 2024/10/01 11:07:45 by yes-slim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"


void	show_err(std::string err){
	std::cerr << err << std::endl;
	exit(1);
}

sed::sed(std::string file){
	this->in = file;
	this->out = file + ".replace";
}

sed::~sed(){}

void	sed::replace(std::string s1, std::string s2){
	std::string	line;
	size_t		pos;
	std::ifstream	infile;
	std::ofstream	outfile;
	
	if (s1.empty())
		show_err("Error: empty string");
	infile.open(in.c_str());
	if (!infile.is_open())
		show_err("Error: file not found");
	std::getline(infile, line, '\0');
	if (line.empty())
		show_err("Error: empty file");
	infile.close();
	outfile.open(this->out.c_str());
	pos = line.find(s1);
	while (pos != std::string::npos) {
    	line = line.substr(0, pos) + s2 + line.substr(pos + s1.length());
		pos = line.find(s1, pos + s2.length());
  	}
  	outfile << line;
 	outfile.close();
}