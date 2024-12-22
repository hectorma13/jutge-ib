/*
 Universidad de La Laguna
 Escuela Superior de Ingeniería y Tecnología
 Grado en Ingeniería Informática
 Informática Básica 2024-2025

 @file P78548.cc
 @author Héctor Martín Álvarez alu0101714059@ull.edu.es
 @date 14/12/2024
 @brief A program that reads words, and prints each one reversing the order of its characters.
 @bug No hay bugs conocidos
 @see https://jutge.org/problems/P78548_en
*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main() {
  std::string word;
  std::vector<char> word_vec;
  while (std::cin >> word) {
    for (const char& character : word) {
      word_vec.push_back(character);
    }
    std::reverse(word_vec.begin(), word_vec.end());
    for (const char& character : word_vec) {
      std::cout << character;
    }
    std::cout << std::endl;
    word_vec.clear();
    }
  return 0;
}