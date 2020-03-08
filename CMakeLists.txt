set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
cmake_minimum_required(VERSION 3.10)

project(HardcoreDP)

add_executable(HardcoreDP src/HardcoreDP.cpp)
target_link_libraries(HardcoreDP pthread)
target_include_directories(HardcoreDP PRIVATE inc/)
target_compile_options(HardcoreDP PRIVATE -Wall -Werror -Wpedantic -Wextra)
