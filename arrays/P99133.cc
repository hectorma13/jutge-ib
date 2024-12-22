/*
 Universidad de La Laguna
 Escuela Superior de Ingeniería y Tecnología
 Grado en Ingeniería Informática
 Informática Básica 2024-2025

 @file P99133.cc
 @author Héctor Martín Álvarez alu0101714059@ull.edu.es
 @date 14/12/2024
 @brief A program that reads words, and prints them in reverse order, 
        reversing also the order of the characters of each word.
 @bug No hay bugs conocidos
 @see 
*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main() {
  int n;
  std::cin >> n;
  std::vector<std::string> words(n);
  for (int i{0}; i < n; ++i) {
    std::cin >> words[i];
  }
  std::reverse(words.begin(), words.end());
  for (int i{0}; i < words.size(); ++i) {
    std::string word_to_reverse{words[i]};
    std::vector<char> word_to_reverse_chars;
    for (const char& character : word_to_reverse) {
      word_to_reverse_chars.push_back(character);
    }
    std::reverse(word_to_reverse_chars.begin(), word_to_reverse_chars.end());
    for (int i{0}; i < word_to_reverse_chars.size(); ++i) {
      std::cout << word_to_reverse_chars[i];
    }
    std::cout << std::endl;
  }
  return 0;
}