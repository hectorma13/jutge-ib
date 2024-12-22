/*
 Universidad de La Laguna
 Escuela Superior de Ingeniería y Tecnología
 Grado en Ingeniería Informática
 Informática Básica 2024-2025

 @file P71310.cc
 @author Héctor Martín Álvarez alu0101714059@ull.edu.es
 @date 14/12/2024
 @brief A function that returns the scalar product of u and v.
 @bug No hay bugs conocidos
 @see 
*/
#include <iostream>
#include <vector>
double scalar_product(const std::vector<double>& u, const std::vector<double>& v) {
  double result{0};
  for (int i{0}; i < u.size(); ++i) {
    result += u[i] * v[i];
  }
  return result;
}
int main() {
  std::cout.setf(std::ios::fixed, std::ios::floatfield);
  std::cout.precision(4);
  int n;
  while (std::cin >> n) {
    std::vector<double> u(n);
    std::vector<double> v(n);
    for (int i = 0; i < n; ++i)
      std::cin >> u[i];
    for (int i = 0; i < n; ++i)
      std::cin >> v[i];
    std::cout << scalar_product(u, v) << std::endl;
  }
  return 0;
}

