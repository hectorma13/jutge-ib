/*
 Universidad de La Laguna
 Escuela Superior de Ingeniería y Tecnología
 Grado en Ingeniería Informática
 Informática Básica 2024-2025

 @file P95972_v2.cc
 @author Héctor Martín Álvarez alu0101714059@ull.edu.es
 @date 21/12/2024
 @brief a function that returns the sum of the divisors of a number n.
 @bug Optimized version, the last one gave EE at jutge.org
 @see https://jutge.org/problems/P95972_en 
*/
#include <iostream>
int sum_divisors(int x) {
  int sum{0};
  for (int i{1}; i*i <= x; ++i) {
    if (x % i == 0) {
      sum += i;
      if (i != x / i) {
        sum += x / i;
      }
    }
  }
  return sum;
}
int main() {
  int x;
  while (std::cin >> x) {
    std::cout << sum_divisors(x) << std::endl;
  }
  return 0;
}