/*
 Universidad de La Laguna
 Escuela Superior de Ingeniería y Tecnología
 Grado en Ingeniería Informática
 Informática Básica 2024-2025

 @file P96275.cc
 @author Héctor Martín Álvarez alu0101714059@ull.edu.es
 @date 20/12/2024
 @brief a function that returns the absolute value of an integer n.
 @bug There are no known bugs.
 @see https://jutge.org/problems/P96275_en
*/
#include <iostream>
int absolute(int n) {
  return (n >= 0) ? n : -n;
}
int main() {
  int n;
  std::cin >> n;
  std::cout << absolute(n) << std::endl;
  return 0;
}