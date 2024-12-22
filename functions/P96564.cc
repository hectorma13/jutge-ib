/*
 Universidad de La Laguna
 Escuela Superior de Ingeniería y Tecnología
 Grado en Ingeniería Informática
 Informática Básica 2024-2025

 @file P96564.cc
 @author Héctor Martín Álvarez alu0101714059@ull.edu.es
 @date 20/12/2024
 @brief a program such that, given n strictly positive natural numbers 
        x1 … xn, prints their least common multiple greater than zero.
 @bug There are no known bugs.
 @see https://jutge.org/problems/P96564_en 
*/
#include <iostream>
int gcd(int a, int b) {
  while (b != 0) {
    int temp = b;
    b = a % b;
    a = temp;
  }
  return a;
}
long long lcm(long long a, long long b) {
  return (a / gcd(a, b)) * b;
}
int main() {
  int n;
  while (std::cin >> n && n != 0) {
    long long result;
    std::cin >> result;
    for (int i{1}; i < n; ++i) {
      int num;
      std::cin >> num;
      result = lcm(result, num);
    }
    std::cout << result;
    std::cout << std::endl;
  }
  return 0;
}