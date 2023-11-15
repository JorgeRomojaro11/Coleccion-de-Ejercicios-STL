#include <iostream>

namespace Ciencia {
    namespace Fisica {
        const double c = 299792458;
        double calcularEnergia(double masa) {
            return masa * c * c;
        }
    }

    namespace Quimica {
        const double constanteAvogadro = 6.022e23;
        double calcularMoles(double particulas) {
            return particulas / constanteAvogadro;
        }
    }

    namespace Biologia {
        const double constanteBoltzmann = 1.380649e-23;
        double calcularEntropia(double temperatura) {
            return constanteBoltzmann * temperatura;
        }
    }
}

int main() {
    std::cout << "Energia: " << Ciencia::Fisica::calcularEnergia(10) << std::endl;
    std::cout << "Moles: " << Ciencia::Quimica::calcularMoles(1e24) << std::endl;
    std::cout << "Entropia: " << Ciencia::Biologia::calcularEntropia(300) << std::endl;

    return 0;
}