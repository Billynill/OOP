//
// Created by Рустам on 9/15/25.
//

#include <iostream>
#include <string>
#include "palindrome.h"

int main() {
    std::string s;
    std::cout << "Введите слово: ";
    std::cin >> s;

    if (is_palindrome(s)) {
        std::cout << s << " это палиндром." << std::endl;
    } else {
        std::cout << s << " это не палиндром." << std::endl;
    }
    return 0;
}