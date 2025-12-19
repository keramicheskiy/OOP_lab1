cmake_minimum_required(VERSION 3.10)
project(Turkification)
set(CMAKE_CXX_STANDARD 17)

include(FetchContent)

FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/refs/heads/main.zip
)

FetchContent_MakeAvailable(googletest)

enable_testing()

add_library(turkification turkification.cpp)
target_include_directories(turkification PUBLIC ${CMAKE_SOURCE_DIR})

add_executable(tests tests.cpp)
target_link_libraries(tests PRIVATE turkification gtest_main)

add_executable(main main.cpp)
target_link_libraries(main PRIVATE turkification)

include(GoogleTest)
gtest_discover_tests(tests)
