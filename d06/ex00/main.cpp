#include <iostream>
#include <iomanip>
#include <sstream>
#include <climits>
#include <cfloat>
#include <cmath>
#include <exception>

bool isLiteral(std::string literal) {
	std::string literals[] = {"-inff", "+inff", "nanf", "-inf", "+inf", "nan"};

	for (int i = 0; i < 6; i++) {
		if (literals[i].compare(literal) == 0) {
			return true;
		}
	}

	return false;
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Usage:  " << argv[0] << " <string>" << std::endl;
		return (0);
	}
	
	std::string str(argv[1]);

	if (str.size() == 1 && (str[0] < '0' || str[0] > '9') && isprint(str[0]))
	{
		std::cout << "char: '" << str[0] << "'" << std::endl;
		std::cout << "int: " << static_cast<int>(str[0]) << std::endl;
		std::cout << "float: " << static_cast<float>(str[0]) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(str[0]) << ".0" << std::endl;
	}
	else
	{
		std::cout << "char: ";
		try {
			char c = static_cast<char>(std::stoi(str));

			if (isprint(c))
				std::cout << "'" << c << "'" << std::endl;
			else {
				std::cout << "Non displayable" << std::endl;
			}
		} catch (std::exception &ex) {
			std::cout << "impossible" << std::endl;
		}

		std::cout << "int: ";
		try {
			int i = static_cast<int>(std::stoi(str));

			std::cout << i << std::endl;
		} catch (std::exception &ex) {
			std::cout << "impossible" << std::endl;
		}

		std::cout << "float: ";
		try {
			float f = static_cast<float>(std::stof(str));

			std::cout << std::setprecision(1) << std::fixed << f << "f" << std::endl;
		} catch (std::exception &ex) {
			std::cout << "impossible" << std::endl;
		}

		std::cout << "double: ";
		try {
			double d = static_cast<double>(std::stod(str));

			std::cout << d << std::endl;
		} catch (std::exception &e) {
			std::cout << "impossible" << std::endl;
		}
	}
}
