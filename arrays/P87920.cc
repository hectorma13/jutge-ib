/*
 Universidad de La Laguna
 Escuela Superior de Ingeniería y Tecnología
 Grado en Ingeniería Informática
 Informática Básica 2024-2025
 @file P87920.cc
 @author Héctor Martín Álvarez alu0101714059@ull.edu.es
 @date 15/12/2024
 @brief a program that, given a sequence of integer numbers, 
        tells if there is any number equal to the sum of the rest.
 @bug No hay bugs conocidos
 @see https://jutge.org/problems/P87920_en
*/
#include <iostream>
#include <algorithm>
#include <vector>

int main() {
  int n;
  while(std::cin >> n) {
    int total_sum{0};
    std::vector<int> numbers(n);
    for (int i{0}; i < n; ++i) {
      std::cin >> numbers[i];
      total_sum += numbers[i];
    }
    bool state{false};
    for (int i{0}; i < n; ++i) {
      if (numbers[i] == total_sum - numbers[i]) {
        state = true;
      }
    }
    std::cout << ((state) ? "YES" : "NO") << std::endl;
  }
  return 0;
}
