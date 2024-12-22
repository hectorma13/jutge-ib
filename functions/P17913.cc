/*
 Universidad de La Laguna
 Escuela Superior de Ingeniería y Tecnología
 Grado en Ingeniería Informática
 Informática Básica 2024-2025

 @file P17913.cc
 @author Héctor Martín Álvarez alu0101714059@ull.edu.es
 @date 20/12/2024
 @brief an iterative function that returns the double factorial n!! for a natural n.
 @bug There are no known bugs.
 @see https://jutge.org/problems/P17913_en 
*/
#include <iostream>
int double_factorial(int n) {
  if (n == 1 || n == 0) {
    return 1;
  }
  int result{1};
  for (int i{0}; i < n; i += 2) {
    result *= n-i;
  }
  return result;
}
int main() {
  int x;
  while (std::cin >> x) std::cout << double_factorial(x) << std::endl;
  return 0;
}
