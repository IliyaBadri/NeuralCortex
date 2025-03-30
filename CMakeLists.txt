cmake_minimum_required(VERSION 3.16)
project(NeuralCortex C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Use Ninja and Clang if available
if(NOT CMAKE_GENERATOR)
    set(CMAKE_GENERATOR "Ninja")
endif()

if(NOT CMAKE_C_COMPILER)
    set(CMAKE_C_COMPILER clang)
endif()

if(NOT CMAKE_CXX_COMPILER)
    set(CMAKE_CXX_COMPILER clang++)
endif()

# Source files
file(GLOB SOURCES "src/*.c")
add_executable(NeuralCortex ${SOURCES})

# Source include directory
target_include_directories(NeuralCortex PRIVATE ${CMAKE_SOURCE_DIR}/include)

# Set rpath to current directory so SDL3 is found locally
set_target_properties(NeuralCortex PROPERTIES
    CMAKE_INSTALL_RPATH "$ORIGIN"
)
