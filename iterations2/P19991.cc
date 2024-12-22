/*
 Universidad de La Laguna
 Escuela Superior de Ingeniería y Tecnología
 Grado en Ingeniería Informática
 Informática Básica 2024-2025

 @file P19991.cc
 @author Héctor Martín Álvarez alu0101714059@ull.edu.es
 @date 20/12/2024
 @brief a program such that, given a chess board, 
        computes the total number of coins on its two diagonals. 
 @bug No known bugs.
 @see https://jutge.org/problems/P19991_en 
*/
#include <iostream>
#include <string>

int main() {
  int rows_columns, coins{0};
  std::cin >> rows_columns;
  for (int i{0}; i < rows_columns; ++i) {
    // First diagonal
    std::string number;
    std::cin >> number;
    coins += number[i] - '0';
    //Second diagonal
    if (i != (rows_columns - i - 1) || rows_columns % 2 == 0) {
      coins += number[rows_columns - i - 1] - '0';
    }
  }
  std::cout << coins << std::endl;
  return 0;
}