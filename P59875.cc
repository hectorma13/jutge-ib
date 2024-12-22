/*
Write a program that reads two numbers x and y, and prints all numbers between x and y (or between y and x), in decreasing order.

Input
Input consists of two integer numbers x and y.

Output
Print all integer numbers between x and y (or between y and x), in decreasing order.
*/

#include <iostream>

int main() {
    int x, y;
    std::cin >> x >> y;

    int max, min;

    if (x > y) {
        max = x;
        min = y;
    } else {
        max = y;
        min = x;
    }

    int resultado{max};
    while (resultado >= min) {
        std::cout << resultado << std::endl;
        resultado -= 1;
    }

    return 0;
}