#include "span.hpp"

Span::Span() {}

Span::Span(unsigned int n) :
        _arr(std::vector<int>(n)),
        _n(0) {

}

Span::~Span() {}

Span::Span(Span const &src) {
    *this = src;
}

Span &Span::operator=(Span const &src) {
    this->_n = src._n;
    this->_arr = src._arr;

    return *this;
}

void Span::addNumber(int begin, int last) {
    for (; begin <= last; begin++){
        this->addNumber(begin);
    }
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator last) {
    for (std::vector<int>::iterator iter = begin; iter != last; iter++)
        this->addNumber(*iter);
}

void Span::addNumber(int n) {
    if (_arr.size() == _n)
        throw (std::range_error("No available space left"));
    _arr[_n] = n;
    _n++;
    std::sort(_arr.begin(), _arr.begin() + _n);
}

unsigned int Span::longestSpan() {
    if (_n < 2)
        throw (std::range_error("small array"));

    int max = *std::max_element(this->_arr.begin(), this->_arr.begin() + this->_n);
    int min = *std::min_element(this->_arr.begin(), this->_arr.begin() + this->_n);

    return max - min;
}

void Span::print() {
    for (std::vector<int>::iterator iter = _arr.begin(); iter != _arr.begin() + _n; iter++) {
        if (iter != _arr.begin())
            std::cout << ", ";
        std::cout << *iter;

    }
    std::cout << std::endl;
}

unsigned int Span::shortestSpan() {
    if (this->_n < 2)
        throw (std::range_error("small array"));

    unsigned int min = _arr[1] - _arr[0];

    for (std::vector<int>::iterator iter = _arr.begin(); iter != _arr.begin() + _n - 1; iter++){

        unsigned int res = *(iter + 1) - *iter;
        if (res < min) {
            min = res;
        }
    }

    return min;
}
