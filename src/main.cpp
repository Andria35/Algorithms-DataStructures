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

    std::vector<int> vector_two_sum = {3, 3};
    int target = 6;

    std::vector<int> two_sum_result = two_sum(vector_two_sum, target);
    print_vector(two_sum_result);
    return 0;
}
