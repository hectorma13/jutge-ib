/*
 Universidad de La Laguna
 Escuela Superior de Ingeniería y Tecnología
 Grado en Ingeniería Informática
 Informática Básica 2024-2025

 @file P21281.cc
 @author Héctor Martín Álvarez alu0101714059@ull.edu.es
 @date 21/12/2024
 @brief a procedure to store in f the most frequent factor of n, and store in q 
        how many times it appears. If there is a tie, choose the smallest factor. 
        For instance, if called with n = 450 = 21 · 32 · 52, the values after 
        the call must be f =3 and q = 2.
 @bug There are no known bugs.
 @see https://jutge.org/problems/P21281_en 
*/
#include <iostream>
void factor(int n, int& f, int& q) {
  if (n < 2) return;
  q = 1;
  f = n;
  for (int i{2}; i*i <= n; ++i) {
    int counter{0};
    while (n % i == 0) {
      n /= i;
      ++counter;
    }
    if (counter > q) {
      q = counter;
      f = i;
    } else if (counter == q && i < f) {
      f = i;
    }
  }
}
int main() {
  int n;
  while (std::cin >> n) {
    int f = -1, q = 1000;
    factor(n, f, q); 
    std::cout << f << ' ' << q << std::endl;
  }
  return 0;
}
