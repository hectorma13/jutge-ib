/*
 Universidad de La Laguna
 Escuela Superior de Ingeniería y Tecnología
 Grado en Ingeniería Informática
 Informática Básica 2024-2025

 @file P93157.cc
 @author Héctor Martín Álvarez alu0101714059@ull.edu.es
 @date 21/12/2024
 @brief a procedure that tries to read a rational number given 
        in the form “numerator”/“denominator”, and stores these 
        two values in num and den, respectively. Additionally, 
        you must remove all common factors from num and den. 
        Furthermore, if the input had a rational number, you must 
        return true; otherwise you must returna false.
 @bug There are no known bugs.
 @see https://jutge.org/problems/P93157_en 
*/
#include <iostream>
bool read_rational(int& num, int& den) {
  char c;
  std::cin >> num >> c >> den;
   if (std::cin) {
    int a = num;
    int b = den;
    while (b != 0) {
      int temp = b;
      b = a % b;
      a = temp;
    }
    num /= a;
    den /= a;
    return true;
  }
  return false;
}
int main() {
  int num, den;
  while (read_rational(num, den)) std::cout << num << ' ' << den << std::endl;
  return 0;
}
