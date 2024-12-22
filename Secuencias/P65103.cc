/*  Universidad de La Laguna
  Escuela Superior de Ingeniería y Tecnología
  Grado en Ingeniería Informática
  Informática Básica 2024-2025
  @file P65103.cc
  @author Héctor Martín Álvarez alu0101714059@ull.edu.es
  @date 15/12/2024
  @brief A program that, given an integer number i and a sequence of natural 
         numbers x1, …, xn, prints xi.
  @bug No hay bugs conocidos
  @see https://jutge.org/problems/P65103_en 
*/
#include <iostream>
#include <vector>
#include <sstream>
#include <string>

int main() {
  int position;
  std::cin >> position;
  std::cin.ignore();
  std::string line;
  std::getline(std::cin, line);
  std::istringstream iss(line);
  std::vector<int> sequence;
  int num;
  while (iss >> num) {
    sequence.push_back(num);
  }
  if (position > 0 && position <= sequence.size()) {
    std::cout << "At the position " << position << " there is a(n) " 
              << sequence[position-1] << "." << std::endl;
  } else {
    std::cout << "Incorrect position." << std::endl;
  }
  return 0;
}