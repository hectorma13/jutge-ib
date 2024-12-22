/*
 Universidad de La Laguna
 Escuela Superior de Ingeniería y Tecnología
 Grado en Ingeniería Informática
 Informática Básica 2024-2025

 @file P18777.cc
 @author Héctor Martín Álvarez alu0101714059@ull.edu.es
 @date 21/12/2024
 @brief a function that, given a valid date made with a day d, 
        a month m and a year y, returns its day of the week, 
        that is, “Monday”, or “Tuesday”, or …
 @bug There are no known bugs.
 @see https://jutge.org/problems/P18777_en 
*/
#include <iostream>
#include <string>

std::string day_of_the_week(int d, int m, int y) {
  int m_prime{m - 2}; //Step 1
  int y_prime{y};
  if (m_prime <= 0) {
    m_prime += 12;
    y_prime -= 1;
  }
  int c{y_prime / 100}; //Step 2
  int a{y_prime % 100}; //Step 3
  int f = (26 * m_prime - 2) / 10 + d + a + (a / 4) + (c / 4) - 2 * c; //Step 4
  f %= 7; // Step 5
  if (f < 0) f += 7;
  const std::string days[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
  return days[f];
}
int main()
{
    int d, m, a;
    while (std::cin >> d >> m >> a) {
        std::cout << day_of_the_week(d, m, a) << std::endl;
    }   
    return 0;
}

