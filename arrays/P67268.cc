/*
 Universidad de La Laguna
 Escuela Superior de Ingeniería y Tecnología
 Grado en Ingeniería Informática
 Informática Básica 2024-2025

 @file P67268.cc
 @author Héctor Martín Álvarez alu0101714059@ull.edu.es
 @date 14/12/2024
 @brief A program that reads sequences of integer numbers, 
        and prints each one reversing the order of its elements
 @bug No hay bugs conocidos
 @see 
*/
#include <iostream>
#include <vector>
#include <algorithm>
int main() {
  int n;
  while (std::cin >> n) {
    std::vector<int> numbers(n);
    for (int i{0}; i < n; ++i) {
      std::cin >> numbers[i];
    }
    std::reverse(numbers.begin(), numbers.end());
    for (int i{0}; i < numbers.size(); ++i) {
      std::cout << numbers[i];
      if (i != numbers.size() -1) {
        std::cout << " ";
      }
    }
    std::cout << std::endl;
  }
  return 0;
}