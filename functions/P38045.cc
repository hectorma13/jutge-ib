/*
 Universidad de La Laguna
 Escuela Superior de Ingeniería y Tecnología
 Grado en Ingeniería Informática
 Informática Básica 2024-2025

 @file P38045.cc
 @author Héctor Martín Álvarez alu0101714059@ull.edu.es
 @date 20/12/2024
 @brief a program that reads a sequence of natural numbers, 
        and prints the square and the square root of each one.
 @bug There are no known bugs.
 @see https://jutge.org/problems/P38045_en 
*/
#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
  int num;
  while (std::cin >> num) {
    std::cout << std::fixed << std::setprecision(6) << num * num 
    << " " << std::sqrt(num) << std::endl;
  }
  return 0;
}