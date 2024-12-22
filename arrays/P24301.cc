/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file integer_division_and_reminder.cc
  * @author Héctor Martín Álvarez alu0101714059@ull.edu.es
  * @date Dec 14 2024
  * @brief a function that returns the concatenation of v1 and v2. 
  *        That is, you must return a vector with the elements of v1 followed by the elements of v2.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P24301_en
  */    
#include <iostream>
#include <vector>

std::vector<int> concatenation(const std::vector<int>& v1, const std::vector<int>& v2) {
  std::vector<int> result{v1};
  for (int i{0}; i < v2.size(); ++i) {
    result.push_back(v2[i]);
  }
  return result;
}
int main() {
  std::vector<int> vec_1 = {1, 2, 3, 4, 5};
  std::vector<int> vec_2 = {10, 20, 30, 40, 50};
  std::vector<int> result = concatenation(vec_1, vec_2);
  return 0;
}