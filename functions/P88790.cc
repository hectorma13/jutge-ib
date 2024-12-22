/*
 Universidad de La Laguna
 Escuela Superior de Ingeniería y Tecnología
 Grado en Ingeniería Informática
 Informática Básica 2024-2025

 @file P88790.cc
 @author Héctor Martín Álvarez alu0101714059@ull.edu.es
 @date 20/12/2024
 @brief an iterative function that computes the greatest common divisor of two natural numbers 
        a and b using the fast version of the Euclidean algorithm.
 @bug There are no known bugs.
 @see https://jutge.org/problems/P88790_en 
*/
#include <iostream>
int gcd(int a, int b) {
  while (b != 0) {
    int temp_var = b;
    b = a % b;
    a = temp_var;
  }
  return a;
}
int main() {
  int x, y;
  while (std::cin >> x >> y) {
      std::cout << gcd(x, y) << std::endl;
  }
  return 0;
}