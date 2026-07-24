cmake_minimum_required(VERSION 3.20)
project(Problem_Solving)

set(CMAKE_CXX_STANDARD 17)

add_executable(petya Codeforces/112A-Petya-and-Strings.cpp)
add_executable(bear Codeforces/791A-Bear-and-Big-Brother.cpp)
add_executable(791A-Bear-and-Big-Brother Codeforces/791A-Bear-and-Big-Brother.cpp
        Codeforces/546A-Soldier-and-Bananas.cpp)
add_executable(546A-Soldier-and-Bananas Codeforces/546A-Soldier-and-Bananas.cpp)
add_executable(977A-Wrong-Subtraction Codeforces/977A-Wrong-Subtraction.cpp)
add_executable(Sorting Codeforces/Sorting.cpp)
add_executable(Lowest-Number Codeforces/Lowest-Number.cpp)
add_executable(Palindrome-Array Codeforces/Palindrome-Array.cpp)
add_executable(Test Codeforces/Test.cpp)