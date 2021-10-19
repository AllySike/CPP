/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 15:16:28 by kgale             #+#    #+#             */
/*   Updated: 2021/10/19 15:16:28 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

static bool openFile(std::string name, std::ifstream *stream)
{
	if ((*stream).is_open())
		(*stream).close();
	if (name == "")
		return (true);
	(*stream).open(name);
	if (!*stream)
		return (true);
	return (false);
}

static std::string replace(char **argv, std::ifstream *stream)
{
	std::string line;
	size_t i;
	size_t size;
	size_t len;

	line.assign(std::istreambuf_iterator<char>(*stream),
					std::istreambuf_iterator<char>());
	i = 0;
	size = line.length();
	len = std::string(argv[2]).length();
	while (i < size)
	{
		if (!line.compare(i, len, argv[2]))
		{
			line.erase(i, len);
			line.insert(i, argv[3]);
		}
		i++;
	}
	return (line);
}

static bool closeFile(std::string line, std::string name)
{
	std::ofstream newFile;
	int i;

	i = 0;
	while(name[i])
	{
		if (name[i] <= 122 && name[i] >= 97)
			name[i] -= 32;
		i++;
	}
	name += ".replace";
	newFile.open(name);
	if (!newFile)
		return (true);
	newFile << line;
	return (false);
}

int main(int argc, char **argv)
{
	std::ifstream ifstream;
	std::string line;

	if (argc != 4 || argv[1] == "" || argv[2] == "" || argv[3] == "")
	{
		std::cerr << "Error:\nThere should be 3 args: FILENAME, s1 and s2\n";
		return (1);
	}
	if (openFile(argv[1], &ifstream))
	{
		std::cerr << "Error:\nFILENAME is wrong\n";
		return (1);
	}
	line = replace(argv, &ifstream);
	if (ifstream.is_open())
		ifstream.close();
	if (closeFile(line, argv[1]))
	{
		std::cerr << "Error:\n";
		return (1);
	}
	return (0);
}
