/*
 Universidad de La Laguna
 Escuela Superior de Ingeniería y Tecnología
 Grado en Ingeniería Informática
 Informática Básica 2024-2025

 @file P27411.cc
 @author Héctor Martín Álvarez alu0101714059@ull.edu.es
 @date 15/12/2024
 @brief A program that, given an integer number i and a sequence of 
        natural numbers x1, …, xn, prints xi.
 @bug No hay bugs conocidos
 @see https://jutge.org/problems/P27411_en
*/
#include <iostream>
#include <vector>
int main() {
  int n;
  int number;
  std::vector<int> numbers;
  std::cin >> n;
  while (std::cin >> number && number != -1) {
    numbers.emplace_back(number);
  }
  if (n <= 0 || n > numbers.size()) {
    std::cout << "Incorrect position." << std::endl;
  } else {
    std::cout << "At the position " << n << " there is a(n) " 
    << numbers[n - 1] << "." << std::endl;
  }
  return 0;
}


