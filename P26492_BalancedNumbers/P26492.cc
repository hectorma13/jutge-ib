#include <iostream>

bool is_balanced(int n) {
  int sum_pair = 0, sum_no_pair = 0;
  bool is_odd = true;

  while (n > 0) {
    int digit = n % 10; //Ultimo digito de nuestro numero
    if (is_odd) {
      sum_no_pair += digit;
    } else {
      sum_pair += digit;
    }
    n /= 10;
    is_odd = !is_odd;
  }

  return (sum_pair == sum_no_pair);
}

int main() {
  int n;
  while (std::cin >> n) std::cout << is_balanced(n) << std::endl;
  return 0;
}

