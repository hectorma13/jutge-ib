/*
 Universidad de La Laguna
 Escuela Superior de Ingeniería y Tecnología
 Grado en Ingeniería Informática
 Informática Básica 2024-2025

 @file P63414.cc
 @author Héctor Martín Álvarez alu0101714059@ull.edu.es
 @date 14/12/2024
 @brief A program that reads a sequence of natural numbers and that prints, for each one, how many times it appears.
 @bug No hay bugs conocidos
 @see https://jutge.org/problems/P63414_en 
*/
#include <iostream>
#include <vector>

int main() {
  int n;
  std::vector<int> numbers;
  std::cin >> n;
  numbers.reserve(n);
  for (int i{0}; i < n; ++i) {
    std::cin >> numbers[i];
  }

}

