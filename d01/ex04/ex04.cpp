#include <iostream>
#include <string>

int main()
{
	std::string		str = "HI THIS IS BRAIN";
	std::string		*strp = &str;
	std::string		&strr = str;

	std::cout << "Pointer: " << *strp << std::endl;
	std::cout << "Reference: " << strr << std::endl;
}