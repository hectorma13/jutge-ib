/*
 Universidad de La Laguna
 Escuela Superior de Ingeniería y Tecnología
 Grado en Ingeniería Informática
 Informática Básica 2024-2025

 @file P24080.cc
 @author Héctor Martín Álvarez alu0101714059@ull.edu.es
 @date 20/12/2024
 @brief a program that prints squares with n2 n’s.
 @bug No known bugs
 @see https://jutge.org/problems/P24080_en
*/
#include <iostream>

int main() {
  int n;
  bool line{true};
  while (std::cin >> n) {
    if (n < 1 || n > 9) {
      return 1;
    }
    if (!line) {
      std::cout << std::endl;
    }
    line = false;
    for (int i{0}; i < n; ++i) {
      for (int j{0}; j < n; ++j) {
        std::cout << n;
      }
      std::cout << std::endl;
    }
  }
  return 0;
}