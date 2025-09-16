//
// Created by Рустам on 9/15/25.
//

#include <iostream>
#include <string>
#include "palindrome.h"

int main() {
    std::string s;
    std::cout << "Enter string: ";
    std::cin >> s;

    if (is_palindrome(s)) {
        std::cout << s << " is a palindrome." << std::endl;
    } else {
        std::cout << s << " is not a palindrome." << std::endl;
    }
    return 0;
}