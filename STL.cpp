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

    // Map
    std::map<std::string, int> edades;

    edades["Juan"] = 25;
    edades["Maria"] = 30;

    std::string nombreBuscado = "Juan";
    auto it = edades.find(nombreBuscado);
    if (it != edades.end()) {
        std::cout << "Edad de " << nombreBuscado << ": " << it->second << std::endl;
    } else {
        std::cout << nombreBuscado << " no encontrado en el mapa." << std::endl;
    }

    // Set
    std::set<int> numerosSet {1, 2, 3, 4, 5};

    numerosSet.erase(1);

    std::cout << "Conjunto: ";
    for (const auto& num : numerosSet) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
