/*
 Universidad de La Laguna
 Escuela Superior de Ingeniería y Tecnología
 Grado en Ingeniería Informática
 Informática Básica 2024-2025

 @file P71649.cc
 @author Héctor Martín Álvarez alu0101714059@ull.edu.es
 @date 21/12/2024
 @brief a procedure to read a sequence of integer numbers until its end, 
        and store in num how many numbers it has, and store in sum the sum of those numbers.
 @bug There are no known bugs.
 @see https://jutge.org/problems/P71649_en 
*/
#include <iostream>
void count_and_add(int& num, int& sum) {
  num = 0;
  sum = 0;
  int number;
  while (std::cin >> number) {
    ++num;
    sum += number;
  }
}
int main() {
  int num = -1; 
  int sum = -33;
  count_and_add(num, sum);
  std::cout << num << ' ' << sum << std::endl;
  return 0;
}