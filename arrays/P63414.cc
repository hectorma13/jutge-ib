/*
 Universidad de La Laguna
 Escuela Superior de Ingeniería y Tecnología
 Grado en Ingeniería Informática
 Informática Básica 2024-2025

 @file P63414.cc
 @author Héctor Martín Álvarez alu0101714059@ull.edu.es
 @date 15/12/2024
 @brief A program that reads a sequence of natural numbers and that prints, 
        for each one, how many times it appears.
 @bug No hay bugs conocidos
 @see 
*/
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
  int n;
  std::cin >> n;
  std::vector<int> numbers(n);
  for (int i{0}; i < n; ++i) {
    std::cin >> numbers[i];
    if (numbers[i] < 1000000000 || numbers[i] > 1000001000) {
      return 1;
    }
  }
  std::sort(numbers.begin(), numbers.end());
  for (int i{0}; i < n; ++i) {
    if (i == 0 ||numbers[i] != numbers[i - 1]) {
      int count = std::count(numbers.begin(), numbers.end(), numbers[i]);
      std::cout << numbers[i] << " : " << count << std::endl;
    }
  }
  return 0;
}