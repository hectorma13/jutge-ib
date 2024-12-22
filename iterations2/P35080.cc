/*
 Universidad de La Laguna
 Escuela Superior de Ingeniería y Tecnología
 Grado en Ingeniería Informática
 Informática Básica 2024-2025

 @file P35080.cc
 @author Héctor Martín Álvarez alu0101714059@ull.edu.es
 @date 20/12/2024
 @brief a program that prints n squares n × n. Draw each square independently, 
        and start filling it with 0, 1, …, 9, 0, etc.
 @bug No known bugs.
 @see https://jutge.org/problems/P35080_en
*/
#include <iostream>

int main() {
  int n;
  bool line_control{true};
  std::cin >> n;
  for (int i{0}; i < n; ++i) {
    if (!line_control) {
      std::cout << std::endl;
    }
    int counter{10};
    for (int j{0}; j < n; ++j) {
        for (int k{0}; k < n; ++k) {
          std::cout << counter % 10;
          ++counter;
        }
      std::cout << std::endl;
      line_control = false;
    }
  }
  return 0;
}