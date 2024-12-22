/*
 Universidad de La Laguna
 Escuela Superior de Ingeniería y Tecnología
 Grado en Ingeniería Informática
 Informática Básica 2024-2025

 @file P13623.cc
 @author Héctor Martín Álvarez alu0101714059@ull.edu.es
 @date 20/12/2024
 @brief a program such that, given a chess board, computes the total number of coins on its white squares.
 @bug No known bugs.
 @see https://jutge.org/problems/P13623_en
*/
#include <iostream>
#include <string>

int main() {
  int rows, columns, coins{0};
  bool is_white{true}; //say is its a white square or not
  std::cin >> rows >> columns;
  for (int i{0}; i < rows; ++i) {
    std::string row_nums;
    std::cin >> row_nums;
    for (int j{0}; j < row_nums.size(); ++j) {
      if (is_white) {
      coins += row_nums[j] - '0';
      is_white = !is_white;
      } else {
        is_white = !is_white;
      }
    } 
    if ((columns % 2 == 0)) {
      is_white = !is_white;
    }
  }
  std::cout << coins << std::endl;
  return 0;
}
