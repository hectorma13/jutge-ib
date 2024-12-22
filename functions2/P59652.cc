/*
 Universidad de La Laguna
 Escuela Superior de Ingeniería y Tecnología
 Grado en Ingeniería Informática
 Informática Básica 2024-2025

 @file P59652.cc
 @author Héctor Martín Álvarez alu0101714059@ull.edu.es
 @date 21/12/2024
 @brief a procedure to read a rational number given in the form “numerator”/“denominator”, 
        and store these two values in num and den, respectively. Additionally, you must 
        remove all common factors from num and den.
 @bug There are no known bugs.
 @see https://jutge.org/problems/P59652_en 
*/
#include <iostream>
void read_rational(int& num, int& den) {
  char c;
  std::cin >> num >> c >> den;
  int a = num;
  int b = den;
  while (b != 0) {
    int temp = b;
    b = a % b;
    a = temp;
  }
  num /= a;
  den /= a;
}
int main() {
    int num, den;
    read_rational(num, den);
    std::cout << num << '/' << den << std::endl;
    return 0;
}

