/*
 Universidad de La Laguna
 Escuela Superior de Ingeniería y Tecnología
 Grado en Ingeniería Informática
 Informática Básica 2024-2025

 @file P61061.cc
 @author Héctor Martín Álvarez alu0101714059@ull.edu.es
 @date 20/12/2024
 @brief a program that reads several numbers, and for each one prints the product of its digits, 
        and the product of the digits of the latest product, etcetera, 
        until the resulting product has just one digit.
 @bug No known bugs.
 @see https://jutge.org/problems/P61061_en
*/
#include <iostream>
#include <string>

int main() {
  int n;
  while (std::cin >> n) {
    int new_n{n};
    if (new_n < 10) {
      std::cout << "The product of the digits of " << new_n 
      << " is " << new_n << "." << std::endl;
    }
    while (new_n >= 10) {
      int result{1};
      while (new_n > 0) {  
       result *= new_n % 10;
        new_n /= 10;
        }  
      std::cout << "The product of the digits of " << n 
      << " is " << result << "." << std::endl;
      new_n = result;
      n = result;
    }
  std::cout << "----------" << std::endl;  
  }
  return 0;
}