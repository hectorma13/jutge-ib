/*
 Universidad de La Laguna
 Escuela Superior de Ingeniería y Tecnología
 Grado en Ingeniería Informática
 Informática Básica 2024-2025

 @file P39057.cc
 @author Héctor Martín Álvarez alu0101714059@ull.edu.es
 @date 20/12/2024
 @brief a program that reads several descriptions of rectangles and circles, 
        and for each one prints its corresponding area.
 @bug No known bugs.
 @see https://jutge.org/problems/P39057_en
*/
#include <iostream>
#include <string>
#include <iomanip>

constexpr double kPi = 3.14159265358979323846;
int main() {
  int n;
  std::cin >> n;
  for (int i{0}; i < n; ++i) {
    std::string shape;
    std::cin >> shape;
    if (shape == "rectangle") {
      double length, width;
      std::cin >> length >> width;
      std::cout << std::fixed << std::setprecision(6) << length*width << std::endl;
    } else {
      double radius;
      std::cin >> radius;
      std::cout << std::fixed << std::setprecision(6) << kPi*radius*radius << std::endl;
    }
  }
  return 0;
}