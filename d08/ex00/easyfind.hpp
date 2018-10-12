#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <algorithm>
template<typename T>
bool easyfind(T d, int i) { return (*std::find(d.begin(), d.end(), i) == i); }
#endif
