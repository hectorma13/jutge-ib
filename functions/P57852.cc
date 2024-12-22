/*
 Universidad de La Laguna
 Escuela Superior de Ingeniería y Tecnología
 Grado en Ingeniería Informática
 Informática Básica 2024-2025

 @file P57852.cc
 @author Héctor Martín Álvarez alu0101714059@ull.edu.es
 @date 20/12/2024
 @brief a function that computes the greatest common divisor of four natural 
        numbers a, b, c and d using the fast version of the Euclidean algorithm.
 @bug There are no known bugs.
 @see https://jutge.org/problems/P57852_en
*/
#include <iostream>
// We'll use GCD(a,b,c,d) = GCD(GCD(a,b),GCD(GCD(c,d)))
int gcd(int a, int b) {
  while (b != 0) {
    int temp = b;
    b = a % b;
    a = temp;
  }
  return a;
}
int gcd4(int a, int b, int c, int d) {
  return gcd(gcd(a,b), gcd(c,d));
}
int main() {
  int a, b, c, d;
  while (std::cin >> a >> b >> c >> d) {
      std::cout << gcd4(a, b, c, d) << std::endl;
  }
  return 0;
}