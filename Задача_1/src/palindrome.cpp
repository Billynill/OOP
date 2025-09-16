//
// Created by Рустам on 9/15/25.
//

#include "palindrome.h"

bool is_palindrome(std::string_view s) {
    const size_t n = s.size();
    for (size_t i = 0; i < n / 2; ++i) {
        if (s[i] != s[n - 1 - i]) {
            return false;
        }
    }
    return true;
}