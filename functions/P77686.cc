/*
 Universidad de La Laguna
 Escuela Superior de Ingeniería y Tecnología
 Grado en Ingeniería Informática
 Informática Básica 2024-2025

 @file P77686.cc
 @author Héctor Martín Álvarez alu0101714059@ull.edu.es
 @date 21/12/2024
 @brief a function that tells whether the natural number n is a palindromic number or not.
 @bug There are no known bugs.
 @see https://jutge.org/problems/P77686_en  
*/
#include <iostream>

bool is_palindromic(int n) {
  int rev_num{0}, new_n{n};
  while (new_n > 0) {
    rev_num = rev_num * 10 + new_n % 10;
    new_n /= 10;
    }
  return n == rev_num;
}
int main() {
  int n;
  while (std::cin >> n) std::cout << (is_palindromic(n) ? "true" : "false") << std::endl;
  return 0;
}