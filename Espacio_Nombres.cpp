#include <iostream>
#include <cmath>

namespace Matematicas {
    int suma(int a, int b) {
        return a + b;
    }

    int resta(int a, int b) {
        return a - b;
    }

    int multiplicacion(int a, int b) {
        return a * b;
    }

    double division(int a, int b) {
        if (b !=0) {
            return static_cast<double>(a) / b;
        } else {
            throw "Error: División por cero";
        }
    }

    double potencia(double base, int exponente) {
        return std::pow(base, exponente);
    }
}

int main() {
    std::cout << "Suma: " << Matematicas::suma(8, 23) << std::endl;
    std::cout << "Resta: " << Matematicas::resta(78, 56) << std::endl;
    std::cout << "Multiplicación: " << Matematicas::multiplicacion(9, 7) << std::endl;
    std::cout << "División: " << Matematicas::division(33, 3) << std::endl;
    std::cout << "Potencia: " << Matematicas::potencia(3, 3) << std::endl;

    return 0;
}