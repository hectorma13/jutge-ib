/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file integer_division_and_reminder.cc
  * @author Héctor Martín Álvarez alu0101714059@ull.edu.es
  * @date Dec 14 2024
  * @brief a program that reads a sequence of prime numbers 
  *        and, for each one, prints the next prime number.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P50095_en
  */
#include <iostream>

bool isPrime(int number) { // Checks if number is prime or not
  if (number == 2) {
    return true;
  }
  if (number <= 1 || number % 2 == 0) {
    return false;
  }
  for (int i{3}; i < number; i += 2) {
    if (number % i == 0) {
      return false;
    }
  }
  return true;
}
int nextPrime(int number) { // Gets the next prime number
  ++number;
  while (!isPrime(number)) {
    ++number;
  }
  return number;
}
int main() {
  int number; // Our number variable
  while (std::cin >> number) { //
    if (isPrime(number)) {
      std::cout << nextPrime(number) << std::endl;
    } else {
      break;
    }
  }
  return 0;
}