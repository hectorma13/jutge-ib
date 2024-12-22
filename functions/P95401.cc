/*
 Universidad de La Laguna
 Escuela Superior de Ingeniería y Tecnología
 Grado en Ingeniería Informática
 Informática Básica 2024-2025

 @file P95401.cc
 @author Héctor Martín Álvarez alu0101714059@ull.edu.es
 @date 21/12/2024
 @brief a function that tells if the given year is a leap year or not. 
        To recall the rules about leap years, check the exercise ‍.
 @bug There are no known bugs.
 @see https://jutge.org/problems/P95401_en
*/
#include <iostream>

bool is_leap_year(int year) {
  if (year < 1800 || year > 9999) {
    return false;
  }
  if ((year % 4 == 0 && year % 100 != 0) || (year % 4 == 0 && year % 100 == 0 && year % 400 == 0)) {
    return true;
  } else {
    return false;
  }
}
int main() {
  int a;
  while (std::cin >> a)
      std::cout << (is_leap_year(a) ? "true" : "false") << std::endl;
  return 0;
}