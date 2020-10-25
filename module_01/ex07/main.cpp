/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 03:10:14 by jeldora           #+#    #+#             */
/*   Updated: 2020/10/25 05:18:55 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

std::string		get_text(std::string file)
{
	std::ifstream	in(file);
	std::string		result;

	if (!in)
	{
		std::cout << "File does not exist\n";
		exit(1);
	}
	getline(in, result, '\0');
	return (result);
}

void			create_output_file(std::string text, std::string file)
{
	file.append(".replace");
	std::ofstream out(file, std::ios::trunc);
	out << text;
}

std::string		change_text(std::string str, std::string s1, std::string s2)
{
	unsigned long	i = 0;
	
	while((i = str.find(s1, i)) != std::string::npos)
	{
		str.replace(i, s1.length(), s2);
		i += s2.length();
	}
	return (str);
}

int				main(int argc, char **argv)
{
	std::string		file, s1, s2, str;

	if (argc < 4)
	{
		std::cout << "Too few arguments." << std::endl;
		return (1);
	}
	file = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	if (file.empty() || s1.empty() || s2.empty())
	{
		std::cout << "One of arguments is empty.\n";
		return (1);
	}
	str = get_text(file);
	str = change_text(str, s1, s2);
	create_output_file(str, file);
	return (0);
}