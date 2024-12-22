/*
 Universidad de La Laguna
 Escuela Superior de Ingeniería y Tecnología
 Grado en Ingeniería Informática
 Informática Básica 2024-2025

 @file P59539.cc
 @author Héctor Martín Álvarez alu0101714059@ull.edu.es
 @date 20/12/2024
 @brief a program that reads a number n and prints the n-th harmonic number, 
        defined as Hn = 1/1 + 1/2 + ⋯ + 1/n.
 @bug No known bugs.
 @see https://jutge.org/problems/P59539_en
*/
#include <iostream>
#include <iomanip>
int main() {
  int n;
  double harmonic_number{0.0000};
  std::cin >> n;
  for (int i{1}; i <= n; ++i) {
    harmonic_number += 1.0/i;
  }
  std::cout << std::fixed << std::setprecision(4) << harmonic_number << std::endl; 
  return 0;
}