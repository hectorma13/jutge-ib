/*
Write a program that adds one second to a clock time, given its hours, minutes and seconds.

Input
Input consists of three natural numbers h, m and s that represent a clock time, that is, such that h<24, m<60 and s<60.

Output
Print the new clock time defined by h, m and s plus one second in the format “HH:MM:SS”.
*/

#include <iostream>

int main() {
    int horas, minutos, segundos;
    std::cin >> horas >> minutos >> segundos;

    if (horas > 0 && horas < 24 && minutos < 60 && minutos > 0 && segundos > 0 && segundos < 60) {
        segundos += 1;  
    } else {
        std::cerr << "Formato inválido" << std::endl;
    }
    return 0;
}

