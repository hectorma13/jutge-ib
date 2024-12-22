#include <iostream>

void read_rational(int& num, int& den) {
    int num{66}, den{12};

    while (num >= 1 && num <= 1000000000 && den >= 1 && den <= 1000000000) {
        for (int i{2}; (i < num && i < den); ++i) {
            if (num % i == 0 && den % i == 0) {
                num /= i;
                den /= i;
            }
        }
}

