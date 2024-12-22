/*
 Universidad de La Laguna
 Escuela Superior de Ingeniería y Tecnología
 Grado en Ingeniería Informática
 Informática Básica 2024-2025

 @file P90133.cc
 @author Héctor Martín Álvarez alu0101714059@ull.edu.es
 @date 20/12/2024
 @brief A program that computes logarithms in several bases.
 @bug No known bugs
 @see https://jutge.org/problems/P90133_en
*/
#include <iostream>

int main() {
  int base, number;
  while (std::cin >> base >> number) {
    int result{0};
    while (number >= base) {
      number /= base;
      ++result;
    }
    std::cout << result << std::endl;
  }
  return 0;
}