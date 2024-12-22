/*
 Universidad de La Laguna
 Escuela Superior de Ingeniería y Tecnología
 Grado en Ingeniería Informática
 Informática Básica 2024-2025

 @file P61634_LeapYears.cc
 @author Héctor Martín Álvarez alu0101714059@ull.edu.es
 @date 24/11/2024
 @brief 
 @bug No hay bugs conocidos
 @see 
*/
#include <iostream>
bool IsLeapYear(const int year) {
  if (year % 4 == 0 && year % 10 != 0 && year % 100 != 0) {
    return true; //Es bisiesto  
  } else if (year % 10 == 0 && year % 100 == 0) {
      if ((year / 100) % 4 == 0) {
        return true; //Es bisiesto si termina por 00 y n/100 es divisor de 4
    } else {
        return false; // En otro caso, no lo es
    }
  }
  return false; 
}

int main() {
  int year;
  std::cin >> year;
  std::cout << (IsLeapYear(year) ? "YES" : "NO") << std::endl;
  return 0;
}
