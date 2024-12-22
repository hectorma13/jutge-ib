/*
 Universidad de La Laguna
 Escuela Superior de Ingeniería y Tecnología
 Grado en Ingeniería Informática
 Informática Básica 2024-2025

 @file P80660.cc
 @author Héctor Martín Álvarez alu0101714059@ull.edu.es
 @date 20/12/2024
 @brief a program that prints the number of steps that it takes to reach 1 for every given n.
 @bug No known bugs.
 @see https://jutge.org/problems/P80660_en 
*/
#include <iostream>

int main() {
  int n;
  while (std::cin >> n) {
    int counter{0};
    if (n < 1) {
      return 1;
    }
    while (n != 1) { 
      if (n % 2 == 0) {
        n /= 2;
      } else {
        n = (3 * n) + 1; 
      }
      ++counter;
    }
  std::cout << counter << std::endl; 
  }
  return 0;
}