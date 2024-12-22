/*
 Universidad de La Laguna
 Escuela Superior de Ingeniería y Tecnología
 Grado en Ingeniería Informática
 Informática Básica 2024-2025

 @file P58153.cc
 @author Héctor Martín Álvarez alu0101714059@ull.edu.es
 @date 20/12/2024
 @brief Write a program that reads pairs of numbers n and m with n ≥ m, and for each pair prints Hn − Hm.
 @bug No known bugs.
 @see https://jutge.org/problems/P58153_en
*/
#include <iostream>
#include <iomanip>

int main() {
  int n, m;
  while (std::cin >> n >> m) {
    if (m > n) {
      return 1;
    }
  double harmonic_difference{0.0};
  for (int i{m + 1}; i <= n; ++i) {
    harmonic_difference += 1.0 / i;
    }
  std::cout << std::fixed << std::setprecision(10) << harmonic_difference << std::endl;
  }
  return 0;
}