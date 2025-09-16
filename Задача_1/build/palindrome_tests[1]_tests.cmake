add_test([=[PalindromeAscii.Basic]=]  [==[/Users/rustam/Desktop/ООП/Лаба 1/build/palindrome_tests]==] [==[--gtest_filter=PalindromeAscii.Basic]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[PalindromeAscii.Basic]=]  PROPERTIES WORKING_DIRECTORY [==[/Users/rustam/Desktop/ООП/Лаба 1/build]==] SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
set(  palindrome_tests_TESTS PalindromeAscii.Basic)
