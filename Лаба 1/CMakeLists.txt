cmake_minimum_required(VERSION 3.16)
project(lab1_palindrome CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Основная библиотека с функцией
add_library(palindrome src/palindrome.cpp)
target_include_directories(palindrome PUBLIC ${CMAKE_SOURCE_DIR}/src)

# Консольное приложение
add_executable(app src/main.cpp)
target_link_libraries(app PRIVATE palindrome)

# GoogleTest (через FetchContent, чтобы ничего не ставить руками)
include(FetchContent)
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()
add_executable(palindrome_tests tests/palindrome_tests.cpp)
target_link_libraries(palindrome_tests PRIVATE palindrome GTest::gtest_main)
include(GoogleTest)
gtest_discover_tests(palindrome_tests)
