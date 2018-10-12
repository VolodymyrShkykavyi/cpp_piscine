#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>

template<typename T> bool easyfind(T cont, int i) {
   
    if (std::find(cont.begin(), cont.end(), i) != cont.end()){
        return true;
    }
    
    throw std::invalid_argument("Element doesn't exist.");
}

#endif
