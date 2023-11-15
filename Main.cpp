#include <iostream>
#include "triangulo.cpp"
#include "Círculo.cpp"
#include "Rombo.cpp"
#include "Trapecio.cpp"

int main() {
    std::cout << "Area del triangulo: " << Geometria::calcularAreaTriangulo(8, 3) << std::endl;
    std::cout << "Area del circulo: " << Geometria::calcularAreaCirculo(7) << std::endl;
    std::cout << "Area del rombo: " << Geometria::calcularAreaRombo(4, 6) << std::endl;
    std::cout << "Area del trapecio: " << Geometria::calcularAreaTrapecio(9, 2, 5) << std::endl;

    return 0;
}