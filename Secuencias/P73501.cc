/*
 Universidad de La Laguna
 Escuela Superior de Ingeniería y Tecnología
 Grado en Ingeniería Informática
 Informática Básica 2024-2025

 @file P73501.cc
 @author Héctor Martín Álvarez alu0101714059@ull.edu.es
 @date 18/12/2024
 @brief A program that reads sequences of natural numbers, and that for each one prints the number of pairs 
        of consecutive numbers such that the second number of the pair is greater than the first one. 
 @bug There are no known bugs
 @see https://jutge.org/problems/P73501_en
*/
#include <iostream>
#include <vector>

int CountIncreasingPairs(const std::vector<int>& sequence) {
  if (sequence.size() < 2) return 0;
  int increasing_pairs = 0;
  for (size_t i = 0; i < sequence.size() - 1; ++i) {
    if (sequence[i + 1] > sequence[i]) {
      ++increasing_pairs;
    }
  }
  return increasing_pairs;
}
int main() {
  int num_sequences;
  std::cin >> num_sequences;
  for (int i = 0; i < num_sequences; ++i) {
    std::vector<int> current_sequence;
    int num;
    while (std::cin >> num && num != 0) {
      current_sequence.push_back(num);
    }
    std::cout << CountIncreasingPairs(current_sequence) << std::endl;
  }
  return 0;
}