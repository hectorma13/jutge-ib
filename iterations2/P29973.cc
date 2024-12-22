/*
 Universidad de La Laguna
 Escuela Superior de Ingeniería y Tecnología
 Grado en Ingeniería Informática
 Informática Básica 2024-2025

 @file P29973.cc
 @author Héctor Martín Álvarez alu0101714059@ull.edu.es
 @date 20/12/2024
 @brief a program that, given a number n, prints a “triangle of size n”.
 @bug No known bugs
 @see https://jutge.org/problems/P29973_en
*/
#include <iostream>

int main() {
  int num;
  std::cin >> num;
  for (int i{1}; i <= num; ++i) {
    for (int j{1}; j <= i; ++j) {
      std::cout << "*";
    }
    std::cout << std::endl;
  }
  return 0;
}