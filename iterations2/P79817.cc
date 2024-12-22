/*
 Universidad de La Laguna
 Escuela Superior de Ingeniería y Tecnología
 Grado en Ingeniería Informática
 Informática Básica 2024-2025

 @file P79817.cc
 @author Héctor Martín Álvarez alu0101714059@ull.edu.es
 @date 20/12/2024
 @brief A program that computes powers.
 @bug No known bugs
 @see https://jutge.org/problems/P79817_en
*/
#include <iostream>

int main() {
  int a, b;
  while (std::cin >> a >> b) {
    int result{1};
    if (b == 0) {
      result = 1;
    } else {
      for (int i{0}; i < b; ++i) {
        result *= a;
      }
    }
    std::cout << result << std::endl;
  }
  return 0;
}