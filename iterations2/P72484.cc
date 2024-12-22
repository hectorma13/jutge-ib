/*
 Universidad de La Laguna
 Escuela Superior de Ingeniería y Tecnología
 Grado en Ingeniería Informática
 Informática Básica 2024-2025

 @file P72484.cc
 @author Héctor Martín Álvarez alu0101714059@ull.edu.es
 @date 20/12/2024
 @brief a program such that, given a number n, prints a “rhombus of size n”.
 @bug There are no known bugs.
 @see https://jutge.org/problems/P72484_en
*/
#include <iostream>

int main() {
  int num;
  std::cin >> num;
  if (num < 1) {
    return 1;
  }
  // Top part
  for (int i{1}; i <= num; ++i) {
    //Spaces
    for (int j{0}; j < (num - i); ++j) {
      std::cout << " ";
    }
    //Asterisks
    for (int j{0}; j < (2*i - 1); ++j) {
      std::cout << "*";
    }
    std::cout << std::endl;
  }
  // Top part
  for (int i{num - 1}; i >= 1; --i) {
    //Spaces
    for (int j{1}; j <= num - i; ++j) {
      std::cout << " ";
    }
    //Asterisks
    for (int j{0}; j < (2*i - 1); ++j) {
      std::cout << "*";
    }
    std::cout << std::endl;
    } 
  return 0;
}