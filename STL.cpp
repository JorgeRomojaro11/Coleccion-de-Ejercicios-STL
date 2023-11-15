#include <iostream>
#include <vector>
#include <map>
#include <set>

int main() {
    // Vector
    std::vector<int> numeros {1, 2, 3, 4, 5};

    numeros.push_back(6);

    std::cout << "Vector: ";
    for (const auto& num : numeros) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
