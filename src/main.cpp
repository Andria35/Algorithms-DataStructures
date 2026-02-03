#include <iostream>
#include <string>
#include <vector>
#include "arrays/array.hpp"

void print_vector(const std::vector<int>& v) {
    std::cout << std:: endl << "[ ";
    for (size_t i = 0; i < v.size(); ++i) {
        std::cout << v[i];
        if (i + 1 < v.size()) std::cout << ", ";
    }
    std::cout << " ]" << std:: endl;
}

int main() {

    generate(5);
}
