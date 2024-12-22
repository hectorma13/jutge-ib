/*
 Universidad de La Laguna
 Escuela Superior de Ingeniería y Tecnología
 Grado en Ingeniería Informática
 Informática Básica 2024-2025

 @file P24381.cc
 @author Héctor Martín Álvarez alu0101714059@ull.edu.es
 @date 21/12/2024
 @brief a procedure to print an n × n cross with the character c. 
 @bug There are no known bugs.
 @see https://jutge.org/problems/P24381_en 
*/
#include <iostream>
void cross(int n, char c) {
  if (n < 3) return;
  for (int i{0}; i < (n - 1) / 2; ++i) { // Top part
    for (int j{0}; j < (n - 1) / 2; ++j) {
      std::cout << " ";
    }
    std::cout << c << std::endl;  
  }
  for (int i{0}; i < n; ++i) std::cout << c; // Mid part
  std::cout << std::endl; 
  for (int i{0}; i < (n - 1) / 2; ++i) { // Down part
    for (int j{0}; j < (n - 1) / 2; ++j) {
      std::cout << " ";
    }
    std::cout << c << std::endl;  
  }
}
int main() {
  int n;
  char c;
  while (std::cin >> n >> c) cross(n, c); 
  return 0;
}
