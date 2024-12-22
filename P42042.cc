#include <iostream>

int main() {
    char letter;
    std::cin >> letter;

    if (letter >= 'A' && letter <= 'Z') {
        std::cout << "uppercase" << std::endl;
    } else {
        std::cout << "lowercase" << std::endl;
    }

    if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' || letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U') {
        std::cout << "vowel" << std::endl;
    } else {
        std::cout << "consonant" << std::endl;
    }

    return 0;
}

