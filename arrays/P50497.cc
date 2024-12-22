/*
 Universidad de La Laguna
 Escuela Superior de Ingeniería y Tecnología
 Grado en Ingeniería Informática
 Informática Básica 2024-2025

 @file P50497.cc
 @author Héctor Martín Álvarez alu0101714059@ull.edu.es
 @date 15/12/2024
 @brief a function that tells if s is a palindrome or not. Remember that a word is a palindrome 
        if it reads the same from left to right than from right to left. 
        In this exercise, s can be rather large; this is why it is passed by reference.
 @bug No hay bugs conocidos
 @see https://jutge.org/problems/P50497_en
*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#include <string>
bool is_palindrome(const std::string& s) {
  int left = 0;
  int right = s.size() - 1;
  while (left < right) {
    if (s[left] != s[right]) {
      return false;
    }
    left++;
    right--;
  }
  return true;
}