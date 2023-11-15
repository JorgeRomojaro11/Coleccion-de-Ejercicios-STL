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
        if (b != 0) {
            return static_cast<double>(a) / b;
        } else {
            throw "Error: División por cero";
        }
    }

    double potencia(double base, int exponente) {
        return std::pow(base, exponente);
    }

}