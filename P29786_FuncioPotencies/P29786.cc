/*
 Universidad de La Laguna
 Escuela Superior de Ingeniería y Tecnología
 Grado en Ingeniería Informática
 Informática Básica 2024-2025

 @file P29786.cc
 @author Héctor Martín Álvarez alu0101714059@ull.edu.es
 @date 18/11/2024
 @brief 
 @bug No hay bugs conocidos
 @see 
*/

#include <iostream>

bool es_potencia_de_3(int n) {
  while (n % 3 == 0 && n != 0) {
        n /= 3;
    }
    return n == 1;
}

int main() {
    int x;
    while (std::cin >> x) std::cout << es_potencia_de_3(x) << std::endl;
}

