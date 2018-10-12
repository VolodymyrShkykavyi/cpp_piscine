#include <iostream>
#include <list>
#include "easyfind.hpp"

int main()
{
	std::list<int> int_array;

	int_array.push_back(1);
	int_array.push_back(4);
	int_array.push_back(3);
	int_array.push_back(9);
	int_array.push_back(156);

	if (easyfind(int_array, 1))
		std::cout << "1 exist in int_array\n";
	else
		std::cout << "1 is not in array\n";

	if (easyfind(int_array, 156))
		std::cout << "156 exist in int_array\n";
	else
		std::cout << "156 is not in array\n";

	if (easyfind(int_array, 1424897))
		std::cout << "1424897 exist in int_array\n";
	else
		std::cout << "1424897 is not in array\n";

	if (easyfind(int_array, -7))
		std::cout << "-7 exist in int_array\n";
	else
		std::cout << "-7 is not in array\n";
}
