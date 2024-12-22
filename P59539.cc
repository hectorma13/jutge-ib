#include <iostream>

int main() {
    int number, counter{1};
    double resultado{0.0};
    std::cin >> number;

    if (number == 0) {
        // Si el número es 0, directamente imprimimos 0.0000
        std::cout << "0.0000" << std::endl;
        return 0;
    }

    while (counter <= number) {  // Iteramos hasta incluir el último valor
        resultado += 1.0 / counter;
        counter++;
    }

    // Redondeamos a 4 decimales sin usar <iomanip>
    resultado = static_cast<int>(resultado * 10000 + 0.5) / 10000.0;

    // Imprimimos el resultado con 4 decimales
    std::cout << resultado << std::endl;

    return 0;
}
