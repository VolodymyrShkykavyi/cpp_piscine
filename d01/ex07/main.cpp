#include <iostream>
#include <string.h>
#include <sstream>
#include <fstream>

int main(int argc, char **argv)
{
	if (argc != 4 || !argv[1][0] || !argv[2][0] || !argv[3][0]) {
		std::cout << "usage: " << argv[0] << " filename string1 string2" << std::endl;
		return (0);
	}

	std::string text;
	std::string file(argv[1]);
	std::ifstream t(file);

	if (!t.is_open())
	{
		std::cout << "Can't open file." << std::endl;
		return (0);
	}

	std::stringstream buffer;
	buffer << t.rdbuf();
	text = buffer.str();

	std::string from(argv[2]);
	std::string to(argv[3]);

	size_t start = 0;
	while ((start = text.find(from, start)) != std::string::npos)
	{
		text.replace(start, from.length(), to);
		start += to.length();
	}

	std::ofstream myfile;
	myfile.open(file + ".replace");
	if (!myfile.is_open())
	{
		std::cout << "Can't write to the file." << std::endl;
		return (0);
	}
	myfile << text;
	myfile.close();

	return (0);
}