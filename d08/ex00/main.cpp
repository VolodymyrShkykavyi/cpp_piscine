#include <iostream>
#include <list>
#include "easyfind.hpp"

int main()
{
	std::list<int> arr;

	arr.push_back(-1);
	arr.push_back(0);
	arr.push_back(1);
	arr.push_back(4);
	arr.push_back(34);

    try {
        std::cout << std::boolalpha
        << "0: " << easyfind(arr, 0) << std::endl
        << "-1: " << easyfind(arr, -1) << std::endl
        << "4: " << easyfind(arr, 4) << std::endl
        << "34: " << easyfind(arr, 34) << std::endl
        << "123: " << easyfind(arr, 123) << std::endl;

    }
    catch (std::exception &e){
        std::cout << "Exception: " << e.what() << std::endl;
    }

}
