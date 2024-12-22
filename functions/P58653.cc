/*
 Universidad de La Laguna
 Escuela Superior de Ingeniería y Tecnología
 Grado en Ingeniería Informática
 Informática Básica 2024-2025

 @file P58653.cc
 @author Héctor Martín Álvarez alu0101714059@ull.edu.es
 @date 20/12/2024
 @brief a program that reads a character and tells if it is a letter, if it is a vowel, if it is a consonant, 
        if it is an uppercase letter, if it is a lowercase letter and if it is a digit. 
 @bug There are no known bugs.
 @see https://jutge.org/problems/P58653_en 
*/
#include <iostream>
#include <string>
#include <cctype>
void print_line(char c, std::string s, bool b) {
    std::cout << s << "('" << c << "') = ";
    if (b) std::cout << "true" << std::endl;
    else std::cout << "false" << std::endl;
}
int main() {
  char c;
  std::cin >> c;
  char c_lower = std::tolower(c);
  print_line(c, "letter", std::isalpha(c)); //Check if it's  a letter
  print_line(c, "vowel", ((c_lower == 'a') || (c_lower == 'e') || 
    (c_lower == 'i') ||(c_lower == 'o') ||(c_lower == 'u'))); //Check if it's vowel
  print_line(c, "consonant", (std::isalpha(c) && !((c_lower == 'a') || (c_lower == 'e') || 
    (c_lower == 'i') ||(c_lower == 'o') ||(c_lower == 'u')))); //Check if it's consonant
  print_line(c, "uppercase", std::isupper(c)); //Check if it's uppercase
  print_line(c, "lowercase", std::islower(c)); //Check if it's lowercase
  print_line(c, "digit", std::isdigit(c)); //Check if it's digit
  return 0;
}