#include <iostream>
#include <iomanip>
#include <sstream>
#include <climits>
#include <cfloat>
#include <cmath>

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "usage:  " << argv[0] << " <string>" << std::endl;
		return (1);
	}
	std::string input(argv[1]);
	if (input.size() == 1 && (input[0] < '0' || input[0] > '9') && isprint(input[0])) // parameter is char
	{
		std::cout << "char: '" << input[0] << "'" << std::endl;
		std::cout << "int: " << static_cast<int>(input[0]) << std::endl;
		std::cout << "float: " << static_cast<float>(input[0]) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(input[0]) << ".0" << std::endl;
	}
	else // parameter is number
	{
		double	number;
		if (input.size() > 1 && input.back() == 'f' && input[input.size() - 2] != 'n')
			input.resize(input.size() - 1);
		std::stringstream	ss(input);
		ss >> number;
		if (ss.fail() || !ss.eof())
		{
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			std::cout << "float: impossible" << std::endl;
			std::cout << "double: impossible" << std::endl;
			return (0);
		}

		//char
		std::cout << "char: ";
		if (number > CHAR_MAX || number < 0)
			std::cout << "impossible" << std::endl;
		else if (isprint(number))
			std::cout << "'" << static_cast<char>(number) << "'" << std::endl;
		else
			std::cout << "Non displayable" << std::endl;

		//int
		std::cout << "int: ";
		if (number > INT_MAX || number < INT_MIN || number != number)
			std::cout << "impossible" << std::endl;
		else
			std::cout << static_cast<int>(number) << std::endl;

		//float
		std::cout << "float: ";
		if ((number > FLT_MAX || number < -FLT_MAX) && number == number && !std::isinf(number))
			std::cout << "impossible" << std::endl;
		else
			std::cout << std::fixed << std::setprecision(1) << static_cast<float>(number) << "f" << std::endl;

		//double
		std::cout << "double: " << std::fixed << std::setprecision(1) << number << std::endl;
	}
}
