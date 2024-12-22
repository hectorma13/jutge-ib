/*
 Universidad de La Laguna
 Escuela Superior de Ingeniería y Tecnología
 Grado en Ingeniería Informática
 Informática Básica 2024-2025

 @file P89078.cc
 @author Héctor Martín Álvarez alu0101714059@ull.edu.es
 @date 15/12/2024
 @brief A program that reads a sequence of natural numbers and prints 
        the position of the first even number.
 @bug No hay bugs conocidos
 @see https://jutge.org/problems/P89078_en
*/
#include <iostream>

int main() {
  int n;
  int position = 1;
  while (std::cin >> n && n >= 0) {
    if (n % 2 == 0) {
      std::cout << position << std::endl;
      break;
    }
    position++;
  }
  return 0;
}
