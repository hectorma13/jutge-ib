/*
 Universidad de La Laguna
 Escuela Superior de Ingeniería y Tecnología
 Grado en Ingeniería Informática
 Informática Básica 2024-2025

 @file P73231.cc
 @author Héctor Martín Álvarez alu0101714059@ull.edu.es
 @date 20/12/2024
 @brief a function that returns the maximum of four given integer numbers a, b, c and d.
 @bug There are no known bugs.
 @see https://jutge.org/problems/P73231_en 
*/
#include <iostream>
int max4(int a, int b, int c, int d) {
  int max;
  max = (a > b) ? a : b;
  max = (max > c) ? max : c;
  return (max > d) ? max : d;
}
int main() {
    int a, b, c, d;
    while (std::cin >> a >> b >> c >> d) {
        std::cout << max4(a, b, c, d) << std::endl;
    }
    return 0;   
}