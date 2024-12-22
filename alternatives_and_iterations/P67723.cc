/*
 Universidad de La Laguna
 Escuela Superior de Ingeniería y Tecnología
 Grado en Ingeniería Informática
 Informática Básica 2024-2025

 @file P67723.cc
 @author Héctor Martín Álvarez alu0101714059@ull.edu.es
 @date 21/12/2024
 @brief a program that computes the greatest common divisor of two numbers.
 @bug There are no known bugs.
 @see https://jutge.org/problems/P67723_en
*/
#include <iostream>
int main() {
  int a, b;
  std::cin >> a >> b;
  std::cout << "The gcd of " << a << " and " << b << " is ";
  while (b != 0) {
    int temp = b;
    b = a % b;
    a = temp;
  }
  std::cout << a << "." << std::endl;
  return 0;
}