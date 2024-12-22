/*
 Universidad de La Laguna
 Escuela Superior de Ingeniería y Tecnología
 Grado en Ingeniería Informática
 Informática Básica 2024-2025

 @file P57846.cc
 @author Héctor Martín Álvarez alu0101714059@ull.edu.es
 @date 20/12/2024
 @brief a function that returns the maximum of two given integer numbers a and b.
 @bug There are no known bugs.
 @see https://jutge.org/problems/P57846_en 
*/
#include <iostream>
int max2(int a, int b) {
  return (a > b) ? a : b;
}
int main() {
  int a, b;
  while (std::cin >> a >> b) {
      std::cout << max2(a, b) << std::endl;
  }
  return 0;
}