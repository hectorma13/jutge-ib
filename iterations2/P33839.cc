/*
 Universidad de La Laguna
 Escuela Superior de Ingeniería y Tecnología
 Grado en Ingeniería Informática
 Informática Básica 2024-2025

 @file P33839.cc
 @author Héctor Martín Álvarez alu0101714059@ull.edu.es
 @date 20/12/2024
 @brief A program that reads several numbers and prints the sum of the digits of each one.
 @bug There are no known bugs
 @see https://jutge.org/problems/P33839_en
*/
#include <iostream>

int main() {
  int number;
  while (std::cin >> number) {
    int num_original{number};
    int result{0};
    if (number == 0) {
      result = 0;
    } else {
      while (number > 0) {
        result += number % 10;
        number /= 10;
      }
    }
    std::cout << "The sum of the digits of " << num_original << " is " 
    << result << "." << std::endl;
  }
  return 0;
}