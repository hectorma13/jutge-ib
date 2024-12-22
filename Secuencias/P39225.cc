/*
 Universidad de La Laguna
 Escuela Superior de Ingeniería y Tecnología
 Grado en Ingeniería Informática
 Informática Básica 2024-2025

 @file P39225.cc
 @author Héctor Martín Álvarez alu0101714059@ull.edu.es
 @date 15/12/2024
 @brief 
 @bug No hay bugs conocidos
 @see 
*/
#include <iostream>
#include <vector>
int main() {
  int n;
  int number;
  std::vector<int> numbers;
  std::cin >> n;
  while (std::cin >> number) {
    numbers.emplace_back(number);
    if (number == -1) {
      break;
    }
  }
  std::cout << "At the position " << n << " there is a(n) " 
  << numbers[n - 1] << "." << std::endl;
  return 0;
}
