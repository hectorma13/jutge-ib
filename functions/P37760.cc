/*
 Universidad de La Laguna
 Escuela Superior de Ingeniería y Tecnología
 Grado en Ingeniería Informática
 Informática Básica 2024-2025

 @file P37760.cc
 @author Héctor Martín Álvarez alu0101714059@ull.edu.es
 @date 20/12/2024
 @brief a program that reads a sequence of angles in degrees, 
        and prints their sine and their cosine.
 @bug There are no known bugs.
 @see https://jutge.org/problems/P37760_en
*/
#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
  double angle;
  while (std::cin >> angle) {
    double radians{angle * (M_PI / 180.0)};
    std::cout << std::fixed << std::setprecision(6) 
    << sin(radians) << " " << cos(radians) << std::endl;
  }
  return 0;
}