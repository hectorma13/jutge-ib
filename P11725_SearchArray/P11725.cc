/*
 Universidad de La Laguna
 Escuela Superior de Ingeniería y Tecnología
 Grado en Ingeniería Informática
 Informática Básica 2024-2025

 @file P11725.cc
 @author Héctor Martín Álvarez alu0101714059@ull.edu.es
 @date 18/11/2024
 @brief 
 @bug No hay bugs conocidos
 @see 
*/

#include <iostream>
#include <vector>

bool exists(int x, const std::vector<int>& v) {
  int n = v.size();

  for (int i{0}; i < n; i++) {
    if (v[i] == x) {
      return true;
    }
  }
  return false;
}
