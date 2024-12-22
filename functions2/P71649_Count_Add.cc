#include <iostream>

void count_and_add(int& num, int& sum) {
    // Asegúrate de inicializar las variables pasadas por referencia.
    num = 0;
    sum = 0;

    int input; // Variable para leer los números
    while (std::cin >> input) { // Mientras haya entrada válida
        ++num;        // Incrementa el contador de números
        sum += input; // Acumula el valor leído
    }
}


int main() {
  int num = 0;
  int sum = 0;
  count_and_add(num, sum);
  std::cout << num << ' ' << sum << std::endl;
  return 0;
}