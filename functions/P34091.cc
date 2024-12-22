/*
 Universidad de La Laguna
 Escuela Superior de Ingeniería y Tecnología
 Grado en Ingeniería Informática
 Informática Básica 2024-2025

 @file P34091.cc
 @author Héctor Martín Álvarez alu0101714059@ull.edu.es
 @date 21/12/2024
 @brief a function that tells if a natural n is perfect.
 @bug There are no known bugs.
 @see https://jutge.org/problems/P34091_en 
*/
#include <iostream>
bool is_perfect(int n) {
  if (n <= 1) {
    return false;
  }
  int sum = 1;
  int sqrt = 2;
  while (sqrt * sqrt <= n) {
    if (n % sqrt == 0) {
      sum += sqrt;
      if (sqrt * sqrt != n) {
        sum += n / sqrt;
      }
      if (sum > n) {
        return false;
      }
    }  
    sqrt++;
  }
  return sum == n;
}
int main() {
  int x;
  while (std::cin >> x)
    std::cout << (is_perfect(x) ? "true" : "false") << std::endl;
  return 0;
}

