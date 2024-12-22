/*
 Universidad de La Laguna
 Escuela Superior de Ingeniería y Tecnología
 Grado en Ingeniería Informática
 Informática Básica 2024-2025

 @file P48713.cc
 @author Héctor Martín Álvarez alu0101714059@ull.edu.es
 @date 18/12/2024
 @brief A program that reads a sequence of natural numbers and, for each one, tells if it is a prime number or not. 
        Remember that a natural number is prime if and only if it is greater 
        than 1 and it does not have any positive divisor other than 1 and itself.
 @bug No hay bugs conocidos
 @see 
*/
#include <iostream>
#include <cmath>

bool isPrime(int n) {
  if (n <= 1) {
    return false;
  }
  for (int i = 2; i <= sqrt(n); i++) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}

int main() {
  int n;
  std::cin >> n;
  for (int i{0}; i < n; ++i) {
    int number;
    std::cin >> number;
    std::cout << number << " is " << (isPrime(number) ? "prime" : "not prime") << std::endl;
  }
  return 0;
}