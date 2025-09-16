//
// Created by Рустам on 9/15/25.
//

#include "palindrome.h"
#include <gtest/gtest.h>

TEST(PalindromeAscii, Basic) {
    EXPECT_TRUE(is_palindrome("madam"));
    EXPECT_TRUE(is_palindrome("level"));
    EXPECT_TRUE(is_palindrome("a"));
    EXPECT_TRUE(is_palindrome(""));

    EXPECT_FALSE(is_palindrome("hello"));
    EXPECT_FALSE(is_palindrome("abc"));
    EXPECT_FALSE(is_palindrome("ab"));
}
