/*
 Universidad de La Laguna
 Escuela Superior de Ingeniería y Tecnología
 Grado en Ingeniería Informática
 Informática Básica 2024-2025

 @file P42280.cc
 @author Héctor Martín Álvarez alu0101714059@ull.edu.es
 @date 20/12/2024
 @brief a program such that, given a chess board, computes the total number of coins on it.
 @bug No known bugs
 @see https://jutge.org/problems/P42280_en
*/
#include <iostream>
#include <string>

int main() {
  int rows, columns, total_coins{0};
  std::cin >> rows >> columns;
  for (int i{0}; i < rows; ++i) {
    std::string coin;
    std::cin >> coin;
    for (int j{0}; j < coin.size(); ++j) {
      total_coins += coin[j] - '0';
    }
  }
  std::cout << total_coins << std::endl;
  return 0;
}